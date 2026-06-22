bool validDigit(int n, int x) {

    int check=0;
    int a;
    while(n!=0){
        a=n%10;
        if (a==x){
            check=1;
        }
        n/=10;
    }
    if (a==x){
         return false;
    }
    return check;  
}