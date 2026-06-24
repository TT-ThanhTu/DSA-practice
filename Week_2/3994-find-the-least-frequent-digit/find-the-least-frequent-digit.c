int getLeastFrequentDigit(int n) {
    int result[10]={0};
    while(n!=0){
         result[n%10]++;
         n/=10;
    }
    int min=1000;
    int a=-1;
    for (int i=0; i<10; i++){
        if(result[i]<min&& result[i]>0){
            min=result[i];
            a=i;
        }
    }
    return a;    
}