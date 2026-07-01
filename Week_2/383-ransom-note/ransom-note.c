bool canConstruct(char* ransomNote, char* magazine) {
    int a[26]={0};
    for(int i=0; magazine[i]!='\0';i++){
        a[magazine[i]-'a']++;
    }
    while(*ransomNote){
        if(a[*ransomNote-'a']==0){
            return false;
        }
        else{
        a[*ransomNote - 'a']--;
        ransomNote++;
        }
    }
    return true;
}