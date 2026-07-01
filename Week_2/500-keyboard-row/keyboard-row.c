/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** findWords(char** words, int wordsSize, int* returnSize) {
     int row[26] = {0};

    // Hàng 1
    row['q' - 'a'] = 1;
    row['w' - 'a'] = 1;
    row['e' - 'a'] = 1;
    row['r' - 'a'] = 1;
    row['t' - 'a'] = 1;
    row['y' - 'a'] = 1;
    row['u' - 'a'] = 1;
    row['i' - 'a'] = 1;
    row['o' - 'a'] = 1;
    row['p' - 'a'] = 1;

    // Hàng 2
    row['a' - 'a'] = 2;
    row['s' - 'a'] = 2;
    row['d' - 'a'] = 2;
    row['f' - 'a'] = 2;
    row['g' - 'a'] = 2;
    row['h' - 'a'] = 2;
    row['j' - 'a'] = 2;
    row['k' - 'a'] = 2;
    row['l' - 'a'] = 2;

    // Hàng 3
    row['z' - 'a'] = 3;
    row['x' - 'a'] = 3;
    row['c' - 'a'] = 3;
    row['v' - 'a'] = 3;
    row['b' - 'a'] = 3;
    row['n' - 'a'] = 3;
    row['m' - 'a'] = 3;
    char **a=(char**) malloc(wordsSize*sizeof(char*));
    // duyet tung tu
    int k=0;
    for(int i=0; i<wordsSize;i++){
        char*p=words[i];
        int first= row[tolower(*p)-'a'];
        int ok=1;
        while(*p){
            if(row[tolower(*p) - 'a']!=first){
                ok=0;
                break;
            }
            p++;
        }
        if(ok==1){
            a[k]=words[i];
            k++;
        }
    }
    *returnSize=k;
    return a;
    
}