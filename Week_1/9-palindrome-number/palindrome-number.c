bool isPalindrome(int x) {
    int c=x;
    if(x<0) return false;
    long long y=0;
    while (x!=0){
        int a=x%10;
        y = y*10+a;
        x/=10;
    }
    if (y==c){
        return true;
    }
    return false;
}