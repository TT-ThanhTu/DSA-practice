int differenceOfSum(int* nums, int numsSize) {
    int sum=0;
    int s=0;
    for(int i=0; i<numsSize; i++){
        sum+=nums[i];
        int x=nums[i];
        while(x!=0){
            s+=x%10;
            x/=10;
        }
    }  
    return abs(sum-s);
    
}