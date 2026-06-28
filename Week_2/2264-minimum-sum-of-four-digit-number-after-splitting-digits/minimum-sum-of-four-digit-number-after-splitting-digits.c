int minimumSum(int num) {
    int a[4];

    for(int i = 0; i < 4; i++){
        a[i] = num % 10;
        num /= 10;
    }

    // sort 4 phần tử
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(a[i] > a[j]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    int new1 = a[0] * 10 + a[2];
    int new2 = a[1] * 10 + a[3];

    return new1 + new2;
}