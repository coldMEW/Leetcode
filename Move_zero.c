#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int position = 0;
    for (int x = 0; x < numsSize; x++)
    {
        if (nums[x] != 0)
        {
            int temp = nums[position];
            nums[position] = nums[x];
            nums[x] = temp;
            position = position + 1;
        }

    }
}




int main()
{
int nums[] = {0,1,0,3,12};
moveZeroes(nums, 5);
for (int x = 0; x < 5; x++)
{
    printf("%d ", nums[x]);
}
return 0;
}


//Just move zero
void moveZeroes1(int* nums, int numsSize) {
    int last = numsSize -1; 
    int count = 0;
    for (int x = 0; x < numsSize - count; x++)
    {
        if (nums[x] == 0)
        {
            int temp = nums[last];
            nums[last] = nums[x];
            nums[x] = temp;
            last = last - 1;
            count = count + 1;
        }
        

        
    }

}