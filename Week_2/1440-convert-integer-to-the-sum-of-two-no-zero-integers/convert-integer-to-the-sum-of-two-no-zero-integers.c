/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getNoZeroIntegers(int n, int* returnSize) {
    int *a = malloc(2 * sizeof(int));

    for (int i = 1; i < n; i++) {
        int x = i;
        int y = n - i;
        int ok = 1;

        while (x > 0) {
            if (x % 10 == 0) {
                ok = 0;
                break;
            }
            x /= 10;
        }

        while (ok && y > 0) {
            if (y % 10 == 0) {
                ok = 0;
                break;
            }
            y /= 10;
        }

        if (ok) {
            a[0] = i;
            a[1] = n - i;
            *returnSize = 2;
            return a;
        }
    }

    return NULL;
}
   