int repeatedNTimes(int* nums, int numsSize) {
    int maxCount = 0;
    int result = nums[0];
    for(int i=0;i<numsSize; i++){
        int count=0;
        for(int j=i; j<numsSize; j++){
            if(nums[i]==nums[j]){
                count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
            result = nums[i];
        }
    }
   return result;
}