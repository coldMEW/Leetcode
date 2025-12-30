#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

bool containsDuplicate(int* nums, int numsSize) {
    float* newarray = malloc(sizeof(float) * 2 * numsSize);
    int newSize = 0;

    for (int i = 0; i < numsSize; i++) {
        float remain = nums[i] % 2;
        float quotient = nums[i] / 2;

        for (int j = 0; j < newSize; j++) {
            if (newarray[2*j] == remain && newarray[2*j + 1] == quotient) {
                free(newarray);
                return true;
            }
        }

        newarray[2 * newSize] = remain;
        newarray[2 * newSize + 1] = quotient;
        newSize++;
    }

    free(newarray);
    return false;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    if (containsDuplicate(nums, numsSize)) {
        printf("Duplicate found.\n");
    } else {
        printf("No duplicates found.\n");
    }

    return 0;
}


bool containsDuplicate1(int* nums, int numsSize) {
    int *arr = malloc (sizeof(int) * numsSize);
    int arraysize = 0;

    for (int x = 0; x < numsSize; x++)

    {
        bool isDuplicate = false;
        for(int i = 0; i < arraysize; i++)
        {
            if (nums[x] == arr[i])
            {
             isDuplicate = true;
                break;
            }
    
        }

    if (isDuplicate)
    {
        free(arr);
        return true;
    }
    arr[arraysize] = nums[x];
     arraysize += 1;
 
    }
     free(arr);
    return false;

}

