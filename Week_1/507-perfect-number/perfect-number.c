bool checkPerfectNumber(int num) {
    double a= sqrt(num);
    if (num<=1) {
         return false;
    }
    int sum =0;
    for (int i=1; i<a; i++){
        if (num%i==0){
            int b= num/i;
            sum+=i+b;
        }
    }
    if ((sum-num)==num){
        return true;
    }
    return false;
}