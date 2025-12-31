#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

       
int lengthOfLongestSubstring_solution2(char* s) {
    int length = strlen(s);
    int longstring = 0;

    char *arr = malloc(sizeof(char) * length);
    int arraysize = 0;

    for (int x = 0; x < length; x++) {
        int duplicateIndex = -1;

        // find duplicate position
        for (int i = 0; i < arraysize; i++) {
            if (s[x] == arr[i]) {
                duplicateIndex = i;
                break;
            }
        }

        // if duplicate found, shift array left
        if (duplicateIndex != -1) {
            int newSize = 0;
            for (int i = duplicateIndex + 1; i < arraysize; i++) {
                arr[newSize++] = arr[i];
            }
            arraysize = newSize;
        }

        // add current character
        arr[arraysize++] = s[x];

        // update max length
        if (arraysize > longstring) {
            longstring = arraysize;
        }
    }

    free(arr);
    return longstring;
}



int lengthOfLongestSubstring(char* s) {
    int length = strlen(s);
    int longstring = 0;
    int start = 0;

    for (int x = 0; x < length; x++) {
        for (int i = start; i < x; i++) {
            if (s[i] == s[x]) {
                start = i + 1;
                break;
            }
        }

        int currentLength = x - start + 1;
        if (currentLength > longstring) {
            longstring = currentLength;
        }
    }

    return longstring;
}


int main()
{

char arr[] = "  aab";
int length = lengthOfLongestSubstring(arr);
printf("%d",length);


}









// Rough

int lengthOfLongestSubstring1(char* s) {
    int length = strlen(s);
    int longstring = 0;
    int count = 0;

    if(length == 1)
    {
        longstring = 1;
    }
    else
    {

    for (int x = 0; x < length; x++)
    {  
  
        for(int j = x+1; j < length; j++)
        {
            if(s[x] == s[j])
            {
                count = count + 1;

                if((j-x) > longstring && count == 1)
                {
                 longstring = (j-x);
    
                }
            }


        }
    count = 0;
    
    }
    if (longstring == 0)
    {
        longstring = length;
    }
}

    return longstring;
    
}





int lengthOfLongestSubstring2(char* s) {
    int length = strlen(s);
    int longstring = 1;
    int count = 0;

    for(int x = 0; x < length; x++ )
    {
        count = 1;
        for (int y = x+1; y < length; y++)
        {

        if (length > 0 && s[x] != s[y])
        {
            count  = count + 1;  
            if (longstring < count)
            {
                longstring = count;
            }
        else if (length == 0)
        {
            longstring = 0;
        }
        
        }
        else{
            x++;
        }
       
        }

    }
    return longstring;
    
}

int lengthOfLongestSubstring3(char* s) {
    int length  = strlen(s);
    int longstring = 0;
    char *arr = malloc (sizeof(char) * length);
    int arraysize = 0;


    int count = 0;

    for (int x = 0; x < length; x++)

    {

        for(int i = 0; i < arraysize; i++)
        {
            if (s[x] == arr[i])
            {
             count = arraysize;
             free (arr);
            char *arr = malloc (sizeof(char) * length);
            int arraysize = 0;
            
            
            }
            else{
                count = count +1;
                arr[arraysize] = s[x];
                arraysize += 1;
            
            }
    
        }



        if (longstring< count)
        {longstring = count;}
     
 
    }
    free(arr);
    return count;

}
 