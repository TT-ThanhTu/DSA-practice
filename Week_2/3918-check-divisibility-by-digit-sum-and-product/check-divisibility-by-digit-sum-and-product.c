bool checkDivisibility(int n) {
    int a=n;
    int sum=0;
    int product=1;
    while(n!=0){
        int a=n%10;
        sum+=a;
        product*=a;
        n/=10;
    }
    if(a%(product+sum)==0){
         return true;
    }
    return false;
    
}