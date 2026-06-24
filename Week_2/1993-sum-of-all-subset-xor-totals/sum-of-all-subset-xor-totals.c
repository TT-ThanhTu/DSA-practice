int subsetXORSum(int* nums, int numsSize) {
    int OR = 0;

    for (int i = 0; i < numsSize; i++) {
        OR |= nums[i];
    }

    return OR * (1 << (numsSize - 1));
}