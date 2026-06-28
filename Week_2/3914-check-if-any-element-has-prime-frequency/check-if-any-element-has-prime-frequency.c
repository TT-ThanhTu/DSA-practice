bool isPrime(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
bool checkPrimeFrequency(int* nums, int numsSize) {
    int a[101]={0};
    for(int i=0 ; i<numsSize; i++){
        a[nums[i]]++;
    }
    for(int i=0; i<101;i++){
        if(isPrime(a[i])){
            return true;
        }
    }

    return false;
        
    
}