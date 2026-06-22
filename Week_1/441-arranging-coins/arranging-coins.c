int arrangeCoins(int n) {
    if (n==1) return 1;
    int count =0;
    for(int i=1; i<=n; i++){
        if (i<=n){
            count++;
        }
        n=n-i;
    }
    return count;
}