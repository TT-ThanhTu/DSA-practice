/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) {
     int *ans = (int *)malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        ans[i] = nums[i];
    }

    // bai nay thay doi sau k lan nhan
    for(int i=1; i<=k ;i++){
        int min=ans[0];
        int a=0;
        for(int j=0; j<numsSize; j++){
           if(ans[j]<min){
            min=ans[j];
            a=j;
           }
        }
        ans[a]=ans[a]*multiplier;
    }
    *returnSize=numsSize;
    return ans;
  
}