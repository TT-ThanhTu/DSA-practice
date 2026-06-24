int maximum69Number (int num) {
    int a;
    int b=0;
    while(num!=0){
        a=num%10;
        b=b*10+a;
        num/=10;
    }
    int c=0;
    int check=0;
    while(b!=0){
        a=b%10;
        if(a!=9 && check==0){
            c=c*10+9; 
            check = 1;
        }
        else{
            c=c*10+a;
        }
        b/=10;
    }
    return c;

}