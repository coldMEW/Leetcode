#include <stdio.h>
#include <stdlib.h>

int binarysearch(int* numbers, int numbersSize, int number)
{
int high, low;
low  = 0;
high = numbersSize -1;
    while (low <= high)
    { int mid = (low + high) / 2;
        if (number  == numbers[mid])
        {
            return mid;
        }
        else if ( number < numbers[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        
    }
   return -1; 
}

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
        int* result = malloc(2 * sizeof(int));

    for (int x = 0; x < numbersSize; x++)
    {
 
        int number  = target - (numbers[x]);
        int found = binarysearch(numbers + x + 1,numbersSize - x - 1,number);
        if (found != -1 )
        {
            result[0] = x+1;
            result[1] = found+ x + 2;
            *returnSize = 2;
            return result;
        }

    }
 *returnSize = 0;
free(result);
return NULL;

}



int main()
{
int numbers[] = {2,7,11,15};
int* returnSize = malloc(sizeof(int)*2);
returnSize = twoSum(numbers, 4, 13, returnSize);
printf("The required numbers are at index %d\n", returnSize[0] );
printf("The required numbers are at index %d\n", returnSize[1] );


return 0;  
}

