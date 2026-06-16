bool isPowerOfTwo(int n) {
    if (n <= 0)
        return false;

    while (n % 2 == 0) {
        n /= 2;
    }

    return n == 1; // neu ==1 thi true con nguoc lai thi false
}