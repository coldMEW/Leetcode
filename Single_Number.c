#include <stdio.h>
int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for (int x = 0; x < numsSize; x++)
    {result = result ^ nums[x];}
   return result; 
}


int main()
{
int array[5] = {4,1,2,1,2};
int Number = singleNumber(array,5);
printf("The missing number is: %d", Number);

}