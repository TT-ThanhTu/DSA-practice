int subtractProductAndSum(int n) { 
    long long sum=0;
    long long product=1;
    while(n!=0){
        long long a=n%10;
        sum+= a;
        product*=a;
        n/=10;
    }
    return product-sum;  
}