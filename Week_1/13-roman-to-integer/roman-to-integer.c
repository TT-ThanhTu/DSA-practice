int romanToInt(char* s) {
    char a[] =  {'I', 'V', 'X', 'L','C','D','M' };
    int b[] =  {1,5,10,50,100,500,1000};
    int c[20]={0};
    int sum=0;
    for (int i=0;i<strlen(s);i++) {
        for (int j=0; j< 7;j++){
            if(s[i]==a[j]){
                c[i]=b[j];
            
            }
        }
    }
    // 1000 100 1000 10 100 1 5
    for (int i=0; i<strlen(s) ;i++){
        if (c[i]<c[i+1]){
            sum+=(c[i+1]-c[i]);
            i++;
        }
        else sum+=c[i];
    }

    return sum;
}

