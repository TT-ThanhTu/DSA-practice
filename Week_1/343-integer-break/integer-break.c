int integerBreak(int n) {
    if (n == 2) return 1;
    if (n == 3) return 2;

    // Xét các trường hợp n >= 4
    if (n % 3 == 0) {
        // Tách hoàn toàn thành các số 3
        return pow(3, n / 3);
    } 
    else if (n % 3 == 1) {
        // Dư 1: Lấy bớt 1 số 3 gộp lại thành 4 (2 * 2)
        return pow(3, (n / 3) - 1) * 4;
    } 
    else { // n % 3 == 2
        // Dư 2: Nhân thêm với 2
        return pow(3, n / 3) * 2;
    }
}