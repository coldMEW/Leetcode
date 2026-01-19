#include <stdio.h>
#include <string.h>


int romanToInt(char* s) {
    int number  = 0;
    int length  = strlen(s);
    for (int x = 0; x < length; x++)
    {
        if (s[x] == 'M')
            {number  += 1000;}
        else if(s[x] == 'D'){
             number += 500;
        }
        else if(s[x] == 'C'){
            if (s[x + 1] != 'M' && s[x + 1] != 'D') {
                number += 100;
            } else {
                number -= 100;
            }
        }
        else if(s[x] == 'L'){
            number += 50;
        }
        else if(s[x] == 'X')
             {   if (s[x + 1] != 'C' && s[x + 1] != 'L') {
            number += 10;
            } else {
                number -= 10;
            }
        }
        else if(s[x] == 'V')
            {  
                number += 5;
            }
        
        else if(s[x] == 'I')
             {   if (s[x + 1] != 'X' && s[x + 1] != 'V') {
            number += 1;
            } else {
                number -= 1;
            }
        }

        printf("Number till now is: %d\n",number);
    }
    return number;
}


//***********************************OPTIMIZED*****************************************************//
int value(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt1(char *s) {
    int total = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int curr = value(s[i]);
        int next = value(s[i + 1]);

        if (curr < next)
            total -= curr;
        else
            total += curr;
    }
    return total;
}

//***********************************OPTIMIZED*****************************************************//


int main()
{
char roman[] = {"MCMXCIV"};
int number = romanToInt(roman);
printf("THe number is: %d", number);


    return 0;
}

