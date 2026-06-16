int addDigits(int num) {
    int sum=0;
    while(num!=0){
        int a= num%10;
        sum+=a;
        num/=10;
        if (num==0){
            if(sum<10){
                return sum;
            }
            num=sum;
            sum=0;
        }
    }
    return sum;
}