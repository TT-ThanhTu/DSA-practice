int minimumFlips(int n) {
    // dau tien chuyen ve nhi phan
    int len=0;// so bit
    int a=n;
    while(a>0){
        len++;
        a>>=1;    
    }
    // so sanh 2 bit doi xung
    int left = len - 1;
    int right = 0;
    int ans = 0;
    while (left > right) {
        int bitLeft = (n >> left) & 1;
        int bitRight = (n >> right) & 1;

        if (bitLeft != bitRight)
             ans += 2;

        left--;
        right++;
    }

    return ans;

}