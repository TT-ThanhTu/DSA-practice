
int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    // bai nay khong duoc chua ky tu khac
    int a[26] = {0};
    while (*allowed) {
        a[*allowed - 'a'] = 1;
        allowed++;
    }

    int count = 0;

    for (int i = 0; i < wordsSize; i++) {
        char *word = words[i];
        int check = 1;

        while (*word) {
            // Nếu gặp ký tự không thuộc allowed
            if (a[*word - 'a'] == 0) {
                check = 0;
                break;
            }
            word++;
        }
        if (check)
            count++;
    }

    return count;
}