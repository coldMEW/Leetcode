#include <stdio.h>

int missingNumber(int* nums, int numsSize) {
    int sum = 0;
    int total_sum = (numsSize*(numsSize + 1))/2;
    for (int x = 0 ; x < numsSize; x++){ 
        sum = sum + nums[x];
    }
    return (total_sum - sum);
    
}

int main()
{
    int array[3] = {0,1,3};
    int Number = missingNumber(array, 3);
    printf("Your missing number is: %d", Number);
    return 0;
}