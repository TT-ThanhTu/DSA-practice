/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *count= (int*) malloc ((numsSize+1)*sizeof(int));
    memset(count, 0, (numsSize + 1) * sizeof(int));
    int *result= (int*) malloc (numsSize*sizeof(int));
    int a = 0;
    for(int i=0; i<numsSize; i++){
        count[nums[i]]++;
    }
    for(int i=1; i<=numsSize; i++){
        if (count[i]==0){
            result[a] = i;
            a++;
        }
    }
    *returnSize = a;
    return result;
}