int reverse(int x){
    long long y = llabs((long long)x);
    long long b=0;
    while(y!=0){
        int a=y%10;
        b=b*10+a;
        if (b > 2147483647){
            return 0;
        }
        y/=10;
    }
    if (x<0) {
        return -b;
    }
    return b;
}