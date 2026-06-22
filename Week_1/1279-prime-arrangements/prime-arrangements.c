#define MOD 1000000007

int numPrimeArrangements(int n) {
    int countPrime = 0;

    // đếm số nguyên tố từ 1 đến n
    for (int i = 2; i <= n; i++) {
        int check = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                check = 0;
                break;
            }
        }

        if (check) {
            countPrime++;
        }
    }

    long long ans = 1;
    for (int i = 2; i <= countPrime; i++) {
        ans = (ans * i) % MOD;
    }
    for (int i = 2; i <= n - countPrime; i++) {
        ans = (ans * i) % MOD;
    }

    return (int)ans;
}