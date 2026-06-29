int sumOfEncryptedInt(int* nums, int numsSize) {
    int sum = 0;

    for (int i = 0; i < numsSize; i++) {
        int x = nums[i];
        int temp = x;
        int maxDigit = 0;
        int encrypted = 0;
        int base = 1;

        // Tìm chữ số lớn nhất
        while (temp > 0) {
            if (temp % 10 > maxDigit)
                maxDigit = temp % 10;
            temp /= 10;
        }

        // Tạo số đã mã hóa
        temp = x;
        while (temp > 0) {
            encrypted += maxDigit * base;
            base *= 10;
            temp /= 10;
        }

        sum += encrypted;
    }

    return sum;
}