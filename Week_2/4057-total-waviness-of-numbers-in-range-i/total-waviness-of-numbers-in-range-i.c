int totalWaviness(int num1, int num2) {
    int ans = 0;
    char s[10];

    for (int x = num1; x <= num2; x++) {
        sprintf(s, "%d", x);

        for (int i = 1; s[i + 1] != '\0'; i++) {
            if ((s[i] > s[i - 1] && s[i] > s[i + 1]) ||
                (s[i] < s[i - 1] && s[i] < s[i + 1])) {
                ans++;
            }
        }
    }

    return ans;
}