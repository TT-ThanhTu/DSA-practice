int alternateDigitSum(int n) {
   int b=0;
    while(n!=0){
        int a= n%10;
        b=b*10+a;
        n/=10;
    }

    int s=0;
    int i=0;
    while(b!=0){
        int du=b%10;
        if (i%2==0){
            s+=du;
        }
        else {
            s-=du;

        }
        i++;
        b/=10;
    }
    return s;
}