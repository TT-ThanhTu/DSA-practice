

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int cnt[101] = {0};

    // Đếm số lần xuất hiện
    for (int i = 0; i < numsSize; i++) {
        cnt[nums[i]]++;
    }

    // Tổng tích lũy
    for (int i = 1; i <= 100; i++) {
        cnt[i] += cnt[i - 1];
    }

    int *ans = (int*)malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0)
            ans[i] = 0;
        else
            ans[i] = cnt[nums[i] - 1];
    }

    *returnSize = numsSize;
    return ans;
}