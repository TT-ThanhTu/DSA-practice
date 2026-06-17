bool isThree(int n) {
    int sum=1;
    for (int i=1; i<n; i++){
        if(n%i==0){
            sum+=1;
        }
    }
    return sum==3;
}
        