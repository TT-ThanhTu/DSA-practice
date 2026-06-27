long long sumAndMultiply(int n) {
    int a=n;
    int b=0;
    int sum=0;
    while(a!=0){
        int c=a%10;
        if(c!=0){
            b=b*10+c;
        }
        sum+=c;
        a/=10;
    }
    int d=0;
    while(b!=0){
        d=d*10+b%10;
        b/=10;
    }
    return (long long) d*sum;
    
}