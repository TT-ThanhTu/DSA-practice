int repeatedNTimes(int* nums, int numsSize) {
    int a[10000+1]={0};
    int maxCount = 0;
    int result, b;
    for(int i=0;i<numsSize; i++){
        a[nums[i]]++;
        b=a[nums[i]];
        if(b>maxCount){
            maxCount=b;
            result = nums[i];
        }
    }
    return result;
}







//     int maxCount = 0;
//     int result = nums[0];
//     for(int i=0;i<numsSize; i++){
//         int count=0;
//         for(int j=i; j<numsSize; j++){
//             if(nums[i]==nums[j]){
//                 count++;
//             }
//         }
//         if(count > maxCount){
//             maxCount = count;
//             result = nums[i];
//         }
//     }
//    return result;
