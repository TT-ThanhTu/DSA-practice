/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberOfPairs(int* nums, int numsSize, int* returnSize) {
    int a[101]={0};
    for(int i=0; i<numsSize; i++){
        a[nums[i]]++;
    }

    int pair = 0;
    int left = 0;

    for (int i = 0; i <= 100; i++) {
        pair += a[i] / 2;
        left += a[i] % 2;
    }

    int *ans = (int*)malloc(2 * sizeof(int));

    ans[0] = pair;
    ans[1] = left;

    *returnSize = 2;

    return ans;
}