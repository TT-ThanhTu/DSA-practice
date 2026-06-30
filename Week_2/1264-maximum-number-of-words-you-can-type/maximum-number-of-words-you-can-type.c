int canBeTypedWords(char* text, char* brokenLetters) {
    int a[26]={0};
  // cho ky tu loi vao mang hien 1 neu co
    while(*brokenLetters!='\0'){
        a[ *brokenLetters-'a']=1;
        brokenLetters++;
    }
  // duyet lan luot cac tu va check tu do voi loi ky tu, gap dau cach thi cong vo
  int count=0;
  int check=0;
  while(* text!=0){
    if(*text!=' '&& a[*text-'a']==1){
        check=1;
    }
    if (*text==' '){
        if(check==0)
        count++;
        check=0;
    }
    text++;
  }
    if (check == 0)
        count++;

    return count;
}
