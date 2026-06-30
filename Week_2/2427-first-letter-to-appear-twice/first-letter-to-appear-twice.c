char repeatedCharacter(char* s) {
   int a[26]={0};
   for(int i=0; s[i]!=0; i++){
    if(a[s[i]-'a']==1)  return s[i];
    else a[s[i]-'a']=1;
   }
   return '\0';
}

    