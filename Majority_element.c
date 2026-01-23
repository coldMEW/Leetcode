#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int majorityElement(int* nums, int numsSize) {
    int length = numsSize / 2;

  
    for (int x = 0; x < numsSize; x++)
    {
        int count = 0;
        for (int y = 0; y < numsSize; y++)
        {
            if (nums[x] == nums[y])
            {
                count = count + 1;
            }
            if ( count > length)
            {
                return nums[x];
            }
        }
    }
    
}

int main()
{
    int nums[7] = {3,2,3,2,2,2,2};
    printf("The number is :%d", majorityElement(nums, 7)) ;

}