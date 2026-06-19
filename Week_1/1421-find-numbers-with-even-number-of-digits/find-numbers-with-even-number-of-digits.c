int findNumbers(int* nums, int numsSize) {
    int sum=0;
    for (int i=0; i<numsSize; i++){
      int k=0;
      while(nums[i]!=0){
        k++;
        nums[i]/=10;
      }
      if(k%2==0) {
        sum+=1;
      }
    }
    
    return sum;
}