int mySqrt(int x) {
    if (x == 0 || x == 1)
        return x;

    for (long long i = 0; ; i++) {
        if (i * i > x) {
            return (int)(i - 1);
        }
    }
}