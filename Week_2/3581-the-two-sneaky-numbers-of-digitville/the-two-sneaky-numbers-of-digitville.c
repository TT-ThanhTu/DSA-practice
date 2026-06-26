#include <stdlib.h>

int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {

    int *count = (int *)calloc(numsSize, sizeof(int));
    int *ans = (int *)malloc(2 * sizeof(int));

    int k = 0;

    for (int i = 0; i < numsSize; i++) {
        count[nums[i]]++;

        if (count[nums[i]] == 2) {
            ans[k++] = nums[i];
        }
    }

    *returnSize = 2;

    free(count);

    return ans;
}