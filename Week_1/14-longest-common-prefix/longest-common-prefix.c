char* longestCommonPrefix(char** strs, int strsSize) {
    static char result[201];
    
    int i=0;
    while (strs[0][i]!='\0'){
        char c= strs[0][i];
        for (int j=1; j<strsSize ;j++){
            if (strs[j][i]!=c){
                result[i]='\0';
                return result;
            }
        }
         result[i]=c;
            i++;
            
        }
        result[i] = '\0';

    return result;
}


    