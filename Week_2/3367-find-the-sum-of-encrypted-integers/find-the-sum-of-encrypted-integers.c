int encrypt(int x) {
    int temp = x;
    int maxDigit = 0;
    int digits = 0;

    // Tìm chữ số lớn nhất và đếm số chữ số
    while (temp > 0) {
        int digit = temp % 10;
        if (digit > maxDigit)
            maxDigit = digit;
        digits++;
        temp /= 10;
    }

    // Tạo số mới
    int res = 0;
    while (digits--) {
        res = res * 10 + maxDigit;
    }

    return res;
}

int sumOfEncryptedInt(int* nums, int numsSize) {
    int sum = 0;

    for (int i = 0; i < numsSize; i++) {
        sum += encrypt(nums[i]);
    }

    return sum;
}