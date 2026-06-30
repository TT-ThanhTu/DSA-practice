int maxNumberOfBalloons(char* text) {
    //0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
    //a b c d e f g h i j k  l  m  n  o  p
    int a[26]={0};
    while(*text!='\0'){
        a[*text-'a']++;
        text++;
    }
    int ans = a[0];          // a

    if (a[1] < ans) ans = a[1];            // b
    if (a[11] / 2 < ans) ans = a[11] / 2;  // l
    if (a[13] < ans) ans = a[13];          // n
    if (a[14] / 2 < ans) ans = a[14] / 2;  // o

    return ans;
}

    