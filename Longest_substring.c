#include <string.h>
#include <stdio.h>

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





int lengthOfLongestSubstring(char* s) {
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






int main()
{

char arr[] = "  aab";
int length = lengthOfLongestSubstring(arr);
printf("%d",length);


}