int minOperations(int* nums, int numsSize, int k) {

    int s=0;
    for(int i=0; i<numsSize; i++){
        s+=nums[i];
    }
    if(s%k==0) {
        return 0;
    }
    return s%k;

    
}