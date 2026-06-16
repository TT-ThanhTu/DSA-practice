
int fib(int n){
    static int a[100] = {0};
    if (n <= 0) return 0;
    if (n == 1) return 1;
    /// 0 1 1 2 3 5 8
    if(a[n] != 0) return a[n];
    else a[n] = fib(n-1) + fib(n-2); 
    
    return a[n];
}