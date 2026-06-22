/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
    int *a = (int*)malloc(n * sizeof(int));

    int idx = 0;

    for (int i = 1; i <= n / 2; i++) {
        a[idx++] = i;
        a[idx++] = -i;
    }

    if (n % 2 == 1) {
        a[idx] = 0;
    }

    *returnSize = n;
    return a;
}