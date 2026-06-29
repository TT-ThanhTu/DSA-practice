int arrayPairSum(int* nums, int numsSize) {
    int cnt[20001] = {0};

    // Đếm số lần xuất hiện
    for (int i = 0; i < numsSize; i++) {
        cnt[nums[i] + 10000]++;
    }

    int sum = 0;
    int index = 0; // vị trí trong mảng sau khi sắp xếp

    for (int i = 0; i <= 20000; i++) {
        while (cnt[i] > 0) {
            if (index % 2 == 0)
                sum += (i - 10000);

            index++;
            cnt[i]--;
        }
    }

    return sum;
}