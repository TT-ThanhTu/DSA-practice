int smallestNumber(int n) {
    int sum=0;
    for (int i=0; ;i++){
        sum += 1 <<i;
        if (sum>=n) {
            return sum;
        }
    } 
}