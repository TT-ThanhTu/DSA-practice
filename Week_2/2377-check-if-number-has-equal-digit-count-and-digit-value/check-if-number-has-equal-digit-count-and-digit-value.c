bool digitCount(char* num) {
    // chuoi cho  1 2 1 0
    // dem tan so cac chu so 0 1 2 3 4 
                         //  1 2 1
    // chuoi cho             0 1 2 3 4
                         //  1 2 1 0
    char *p=num;
    int a[10]={0};
    while(*p){
        a[*p-'0']++;
        p++;
    }
    for(int i=0; num[i]!='\0'; i++){
        if(num[i]-'0'!=a[i]) return false;
    }
    return true;
}