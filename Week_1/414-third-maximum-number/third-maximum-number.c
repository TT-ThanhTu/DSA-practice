
    int thirdMax(int* nums, int numsSize) {
    long long a = 0, b = 0, c = 0;
    int ca = 0, cb = 0, cc = 0;

    for (int i = 0; i < numsSize; i++) {
        long long x = nums[i];

        if ((ca && x == a) || (cb && x == b) || (cc && x == c))
            continue;

        if (!ca || x > a) {
            c = b; cc = cb;
            b = a; cb = ca;
            a = x; ca = 1;
        }
        else if (!cb || x > b) {
            c = b; cc = cb;
            b = x; cb = 1;
        }
        else if (!cc || x > c) {
            c = x; cc = 1;
        }
    }

    return cc ? c : a;

}