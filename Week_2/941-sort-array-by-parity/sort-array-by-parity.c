/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int *ans = (int*)malloc(numsSize * sizeof(int));

    int left = 0;
    int right = numsSize - 1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0)
            ans[left++] = nums[i];
        else
            ans[right--] = nums[i];
    }

    *returnSize = numsSize;
    return ans;
}
    