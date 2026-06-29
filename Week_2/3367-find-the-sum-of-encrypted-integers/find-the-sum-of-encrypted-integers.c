int encrypt(int x) {
    int t = x;
    int mx = 0;
    int len = 0;

    while (t) {
        if (t % 10 > mx)
            mx = t % 10;
        len++;
        t /= 10;
    }

    int ans = 0;
    while (len--) {
        ans = ans * 10 + mx;
    }

    return ans;
}

int sumOfEncryptedInt(int* nums, int numsSize) {
    int sum = 0;

    for (int i = 0; i < numsSize; i++) {
        sum += encrypt(nums[i]);
    }

    return sum;
}