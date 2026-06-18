long long removeZeros(long long n) {
    
    long long a=0;
    while (n!=0){
        int b=n%10;
        if (b !=0){
          a= a*10+b;
        }
        n/=10;
    }
    //a= 321
    long long s=0;
    while (a>0){
        s= s*10 + a%10;
        a/=10;
    }
    return s;
}