int minMoves(int* nums, int numsSize) {
    int min = nums[0];
    long long sum = 0;

    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
        if (nums[i] < min)
            min = nums[i];
    }

    return sum - (long long)numsSize * min;
}