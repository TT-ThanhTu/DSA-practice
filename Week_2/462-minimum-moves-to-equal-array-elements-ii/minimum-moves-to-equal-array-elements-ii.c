int minMoves2(int* nums, int numsSize) {
   // dua ve so trung vi
   for(int i=0; i<numsSize; i++){
    for(int j=i+1; j<numsSize; j++){
        if(nums[i]>nums[j]){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j] =temp;
        }
    }
   }
    int median=nums[numsSize/2];
    int ans = 0;

    for(int i = 0; i < numsSize; i++){
        ans += abs(nums[i] - median);
    }
    return ans;
   }