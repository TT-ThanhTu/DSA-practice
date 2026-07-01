/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *a=(int*)malloc(2*sizeof(int));
    int count1=0;
    for(int i=0; i<nums1Size; i++){
        for(int j=0; j<nums2Size; j++){
            if(nums1[i]==nums2[j]){
                count1++;
                break;
            }
        }
    }
    int count2=0;
    for(int i=0; i<nums2Size; i++){
        for(int j=0; j<nums1Size; j++){
            if(nums2[i]==nums1[j]){
                count2++;
                break;
            }
        }
    }
    a[0]=count1;
    a[1]=count2;
    *returnSize = 2;
    return a;

    
}