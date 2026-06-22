int sumOfPrimesInRange(int n) {
    int a=n;
    int b=0;
    while(n!=0){
        int x=n%10;
        b=b*10+x;
        n/=10;
    }
    int left = (a < b) ? a : b;
    int right = (a > b) ? a : b;

    int s=0;
    for(int i=left; i<=right;i++){
        if(i < 2) continue;
        int check=1;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                check=0;
                break;
            }
        }
        if (check==1){
            s+=i;
        }
    }
    return s;
    
}