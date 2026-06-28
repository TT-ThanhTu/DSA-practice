int largestPerimeter(int* nums, int numsSize) {
     // Sắp xếp tăng dần
    for(int i = 0; i < numsSize - 1; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    // Duyệt từ cuối
    for(int i = numsSize - 1; i >= 2; i--) {
        if(nums[i-2] + nums[i-1] > nums[i]) {
            return nums[i] + nums[i-1] + nums[i-2];
        }
    }

    return 0;
}