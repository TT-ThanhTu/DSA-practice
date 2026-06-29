int countPartitions(int* nums, int numsSize) {
    int count=0;
    for(int i=0; i<numsSize; i++){
        if(nums[i]%2==1){
            count++;
        }
    }
    if(count%2==0) return numsSize-1;
    return 0;
    
}