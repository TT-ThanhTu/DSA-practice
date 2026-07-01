int countGoodSubstrings(char* s) {
    int len = strlen(s);
    if (len < 3) {
        return 0;
    }

    int count = 0;
    for (int i = 0; i <= len - 3; i++) {
        if (s[i] != s[i + 1] 
            && s[i] != s[i + 2] && s[i + 1] != s[i + 2]) {
            count++;
        }
    }

    return count;
}