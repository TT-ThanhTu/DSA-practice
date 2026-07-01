int firstUniqChar(char* s) {
    // tim ky tu dau tien ko co su lap lai va cha ve chi so cua no

    int a[26]={0};
    for(int i=0; s[i]!='\0';i++){
        a[s[i]-'a']++;
    }
    int i=0;
    while(* s){
        if(a[*s-'a']==1){
            return i;
        }
        s++;
        i++;
    } 
    return -1;
}