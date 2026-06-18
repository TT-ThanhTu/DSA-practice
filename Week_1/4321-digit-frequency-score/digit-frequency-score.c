int digitFrequencyScore(int n) {
    // ban chat van la tinh tong thoi
    int sum=0;
    while ( n!=0){
        int a= n%10;
        sum+=a;
        n/=10;
    }
    return sum;
    
}