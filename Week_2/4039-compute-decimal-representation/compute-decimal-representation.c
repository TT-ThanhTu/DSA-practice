/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decimalRepresentation(int n, int* returnSize) {
    int *a= (int*) malloc(10*sizeof(int));
    int i=0;
    long long power=1;
    while (n > 0) {

    int digit = n%10;

    if (digit != 0){
        a[i] = digit*power;
         i++;
    }
    power *= 10;
    n /= 10;
}
   for (int left = 0, right = i - 1; left < right; left++, right--) {
    int temp = a[left];
    a[left] = a[right];
    a[right] = temp;
}

*returnSize = i;

return a;
    
}