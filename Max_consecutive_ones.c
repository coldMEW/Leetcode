#include <stdio.h>
int findMaxConsecutiveOnes(int* nums, int length) {
    int maxCount = 0;
    int count = 0;

    for (int i = 0; i < length; i++) {
        if (nums[i] == 1) {
            count++;
            if (count > maxCount) {
                maxCount = count;
            }
        } else {
            count = 0;
        }
    }

    return maxCount;
}

int main()
{
int nums[] = {1,1,0,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0};
printf("There are %d consecutive ones", findMaxConsecutiveOnes(nums,18));
    return 0;
}