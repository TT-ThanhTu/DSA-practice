int countWords(char** words1, int words1Size, char** words2, int words2Size) {

    int ans = 0;

    for (int i = 0; i < words1Size; i++) {
        int seen = 0;
        for (int j = 0; j < i; j++) {
            if (strcmp(words1[i], words1[j]) == 0) {
                seen = 1;
                break;
            }
        }
        if (seen) continue;

        int cnt1 = 0;
        int cnt2 = 0;
        for (int j = 0; j < words1Size; j++) {
            if (strcmp(words1[i], words1[j]) == 0)
                cnt1++;
        }
        for (int j = 0; j < words2Size; j++) {
            if (strcmp(words1[i], words2[j]) == 0)
                cnt2++;
        }

        if (cnt1 == 1 && cnt2 == 1)
            ans++;
    }

    return ans;
}