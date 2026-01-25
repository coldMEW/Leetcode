#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

bool isValid(char* s) {
    int length = strlen(s);
    if (length % 2 != 0)
    {
        return false;
    }
    
        int count =0;
        for (int x  = 0; x < length / 2; x++)
        {
            if (s[x] =='(' )
            {
                if (s[length - x -1] ==')' || s[x+1] ==')')
                {
                    count = count + 1;
                }
            }
            else if (s[x] =='{' )
            {
                if (s[length - x -1] =='}' || s[x+1] =='}')
                {
                    count = count + 1;
                }
            }
            else if (s[x] =='[' )
            {
                if (s[length - x -1] ==']' || s[x+1] ==']')
                {
                    count = count + 1;
                }
            }
            else{return false;}

        }
        if (count  == length / 2)
        {
            return true;
        }
    


return false;    
}

int main()
{
    char array[] = "[{()}]";
 
    if(isValid(array) == true)
    {
        printf("True");
    }
    else{printf("False");}
    
    
    return 0;
}