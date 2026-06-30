int minimizedStringLength(char* s) {
    int a[26]={0};
    while(*s!='\0'){
        a[*s-'a']++;
        s++;
    }
    int count=0;
    for(int i=0; i<26; i++){
        if(a[i]>0){
            count++;
        }
    }
    return count;
}