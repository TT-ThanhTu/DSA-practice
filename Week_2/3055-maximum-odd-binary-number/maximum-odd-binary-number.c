char* maximumOddBinaryNumber(char* s) {
    int left = 0;
    int len = strlen(s);

    for (int right = 0; right < len; right++) {
        if (s[right] == '1') {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
        }
    }

    char temp = s[left - 1];
    s[left - 1] = s[len - 1];
    s[len - 1] = temp;
    return s;
}