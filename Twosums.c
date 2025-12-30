#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* ans = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    for(int i = 0; i < numsSize; i++) {
        for(int j = i+1; j <= numsSize-1; j++) {
            if(nums[i] + nums[j] == target) {
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    return NULL;
}


int main() {
    int a= 121;
    if (a + a == 2*a)
    int nums[] = {2,7,11,15};
    int target = 17;
    int returnSize;

    int* result = twoSum(nums, 4, target, &returnSize);

    if (result != NULL) {
        printf("Indices found: [%d, %d]\n", result[0], result[1]);
        free(result);  // important to avoid memory leak
    } else {
        printf("No solution found\n");
    }

    return 0;
}