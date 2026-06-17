char* convertToBase7(int num) {
    static char ans[50];

    if (num == 0) {
        ans[0] = '0';
        ans[1] = '\0';
        return ans;
    }

    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    int k = 0;

    while (num > 0) {
        ans[k++] = (num % 7) + '0';
        num /= 7;
    }

    if (isNegative) {
        ans[k++] = '-';
    }

    ans[k] = '\0';

    // Đảo chuỗi
    int left = 0, right = k - 1;
    while (left < right) {
        char temp = ans[left];
        ans[left] = ans[right];
        ans[right] = temp;
        left++;
        right--;
    }

    return ans;
}