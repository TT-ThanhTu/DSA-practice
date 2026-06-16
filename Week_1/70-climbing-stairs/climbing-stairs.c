int climbStairs(int n) {
    if (n <= 2)
        return n;
    // ta thay quy luat la so cach cua n = tong so cach cua n-1 + n-2

    int a = 1; 
    int b = 2; 

    for (int i=3; i<=n;i++){
        int c=a+b;
         a=b;
         b=c;
    }
    return b;
}
    
