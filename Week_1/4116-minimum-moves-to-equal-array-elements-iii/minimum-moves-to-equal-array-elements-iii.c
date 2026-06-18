int minMoves(int* nums, int numsSize) {
    int max=0;
    for (int i=0; i<numsSize; i++){
        if(nums[i]>max){
            max=nums[i];
        }
    }
    int sum=0;
    for (int i=0; i<numsSize; i++){
        sum+=abs(nums[i]-max);
    }
    return sum;
}