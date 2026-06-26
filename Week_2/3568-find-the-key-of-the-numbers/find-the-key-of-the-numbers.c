int generateKey(int num1, int num2, int num3) {
    // tim min theo hang tra ve so chu ko phai nhi phan
    int key = 0;
    int base = 1;

    while (num1 > 0 || num2 > 0 || num3 > 0) {
        int d1 = num1 % 10;
        int d2 = num2 % 10;
        int d3 = num3 % 10;

        int min = d1;
        if (d2 < min) min = d2;
        if (d3 < min) min = d3;

        key += min * base;

        base *= 10;
        num1 /= 10;
        num2 /= 10;
        num3 /= 10;
    }

    return key;

    
}