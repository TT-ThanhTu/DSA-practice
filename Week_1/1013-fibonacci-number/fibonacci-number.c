
int fib(int n){
    int a[n+3]; 
    for(int i = 0; i <= n; i++) a[i]=-1;
    if (n<=1) return a[n] = n;
    /// 0 1 1 2 3 5 8
    else{
        if(a[n] != -1) return a[n];
        else a[n] = fib(n-1) + fib(n-2); 
    }
    return a[n];
}