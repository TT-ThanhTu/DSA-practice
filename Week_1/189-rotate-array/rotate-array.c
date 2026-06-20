void rotate(int* nums, int numsSize, int k) {
   int n = numsSize;
    k %= n;

    int temp[n];

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = nums[i];
    }

    for (int i = 0; i < n; i++) {
        nums[i] = temp[i];
    }
}