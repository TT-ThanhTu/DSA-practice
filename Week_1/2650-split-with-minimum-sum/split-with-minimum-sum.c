int splitNum(int num) {
    int a[20];
    int n = 0;
    
    while(num > 0){
        a[n] = num % 10;
        num /= 10;
        n++;
    }
// n=3 thi a3=5 n=4 nen duyet mang den n-1
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    int num1 = 0;
    int num2 = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0)
            num1 = num1 * 10 + a[i];
        else
            num2 = num2 * 10 + a[i];
    }
    return num1 + num2;
}