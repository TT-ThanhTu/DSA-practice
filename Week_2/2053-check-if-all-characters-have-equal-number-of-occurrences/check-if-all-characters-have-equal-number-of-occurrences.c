bool areOccurrencesEqual(char* s) {
    int a[26]={0};
    for(int i=0; s[i]!='\0';i++){
        a[s[i]-'a']++;
    }
    int b;
    for (int i = 0; i < 26; i++) {
        if (a[i] > 0) {
            b = a[i];
            break;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (a[i] > 0 && a[i] != b) {
            return false;
        }
    }

    return true;
}