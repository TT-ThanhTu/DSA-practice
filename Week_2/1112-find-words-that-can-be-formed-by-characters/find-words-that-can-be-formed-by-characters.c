
int countCharacters(char** words, int wordsSize, char* chars) {
    //** mang chuoi cac ky tu
    int a[26] = {0};

    // Đếm số lần xuất hiện của các ký tự trong chars
    while (*chars) {
        a[*chars - 'a']++;
        chars++;
    }

    int ans = 0;
    // Kiểm tra từng từ
    for (int i = 0; i < wordsSize; i++) {
        int b[26];

        for (int j = 0; j < 26; j++)
            b[j] = a[j];

        char *word = words[i];

        while (*word) {
            if (b[*word -'a'] == 0)
                break;

            b[*word - 'a']--;
            word++;
        }

        // Nếu duyệt hết từ thì cộng độ dài
        if (*word == '\0')
            ans += strlen(words[i]);
    }

    return ans;
}