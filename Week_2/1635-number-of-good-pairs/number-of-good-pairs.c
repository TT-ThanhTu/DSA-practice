int numIdenticalPairs(int* nums, int numsSize) {
    // so dep doi la so bang nhau co chi so i,j
    int count=0;
    for(int i=0;i<numsSize; i++){
        for(int j=i+1; j<numsSize; j++){
            if((nums[i]==nums[j]) && (i<j)){
                count++;
            }
        }
    }
    return count;
}