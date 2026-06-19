int commonFactors(int a, int b) {
    if(a>b){
        int s=b;
    }
    int s=b;
    int x=0;
    for(int i=1; i<=s;i++){
        if((a%i==0) && (b%i==0)){
            x+=1;
        }
    }
    return x;
}