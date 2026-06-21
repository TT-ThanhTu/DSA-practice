/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {

    int* ans = (int*)malloc(sizeof(int) * numsSize);
    int k = 0;

    for(int i = 0; i < numsSize; i++) {

        int index = abs(nums[i]) - 1;

        if(nums[index] < 0) {
            ans[k++] = index + 1;
        }
        else {
            nums[index] = -nums[index];
        }
    }

    *returnSize = k;
    return ans;
}