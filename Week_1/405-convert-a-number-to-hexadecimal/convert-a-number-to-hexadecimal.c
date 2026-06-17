char* toHex(int num) {
    // so thap phan thanh so hexa
    // neu so am thi phai dung bu 2
    static char ans[20]; // khai bao mảng ky tu de in ra
    char digit[] = "0123456789abcdef"; // mang hexa tương ứng với thap phan
    // truong hop neu num=0
    if(num == 0) {
        ans[0] = '0';
        ans[1] = '\0';
        return ans;
    }

    // neu num<0 , may tinh luu ma dươi dang ma bu 2
    // neu ep kieu ko dau, thi may hieu ma bu 2 do la so duong, lam tuong tu nhu so duong
    unsigned int n = num; 
    int k = 0;

    while(n > 0) {
        int r = n % 16;
        ans[k] = digit[r];
        k++;
        n /= 16;
    }

    ans[k] = '\0';
    // lay nguoc mang bang cach doi cho cac phan tu
    for(int i = 0, j = k - 1; i < j; i++, j--) {
        char t = ans[i];
        ans[i] = ans[j];
        ans[j] = t;
    }

    return ans;
}