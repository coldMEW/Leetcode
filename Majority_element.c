#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int majorityElement(int* nums, int numsSize)
{
    int candidate = nums[0];
    int count = 1;

    for (int i = 1; i < numsSize; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    return candidate;
}


int main()
{
    int nums[11] = {2,2,1,1,1,2,2,1,1,1,1};
       printf("The number is: %d", majorityElement(nums, 11)) ;

}