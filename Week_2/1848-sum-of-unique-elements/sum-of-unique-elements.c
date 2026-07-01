int sumOfUnique(int* nums, int numsSize) {
    int a[101]={0};
    for(int i=0; i<numsSize;i++){
        a[nums[i]]++;
    }
    int s=0;
    for(int i=0; i<=100; i++){
        if(a[i]==1) s+=i;
    }
    return s;
    
}