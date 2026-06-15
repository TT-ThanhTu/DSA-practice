
bool isHappy(int n) {
    // Nếu n ban đầu là số có 1 chữ số, chỉ có 1 và 7 là số hạnh phúc
    if (n < 10) {
        return (n == 1 || n == 7);
    }
    
    int sum = 0; 
    
    while (n != 0) {
        int a = n % 10;
        sum += a * a;
        n /= 10;
        if (n == 0) {
            if (sum == 1) {
                return true;
            }
            if (sum < 10) {
                if (sum == 7) {
                    n = sum;
                    sum = 0; 
                } else {
                    return false;
                }
            } else {
                
                n = sum;
                sum = 0; 
            }
        }
    }
    return false;
}
