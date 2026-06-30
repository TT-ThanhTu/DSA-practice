/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* frequencySort(int* nums, int numsSize, int* returnSize) {
    int freq[201] = {0}; // vi co gia tri am
    for (int i = 0; i < numsSize; i++) {
        freq[nums[i] + 100]++;
    }

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (freq[nums[i] + 100] > freq[nums[j] + 100]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            // Nếu tần suất bằng nhau thì số lớn hơn đứng trước
            else if (freq[nums[i] + 100] == freq[nums[j] + 100] && nums[i] < nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    *returnSize = numsSize;

    int *a = (int *)malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++)
        a[i] = nums[i];

    return a;
}