int heightChecker(int* heights, int heightsSize) {
    int a[heightsSize];
    for (int i=0; i<heightsSize;i++){
        a[i]=heights[i];
    }
for(int i=0 ;i<heightsSize-1; i++){
    for(int j=i+1; j<heightsSize;j++){
       if( heights[i]>heights[j]){
        int temp=heights[i];
        heights[i]=heights[j];
        heights[j]= temp;
       }
    }  
}
int count=0;
 for(int i=0; i<heightsSize;i++){
    if(a[i]!=heights[i]){
        count++;
    }
 }
 return count;
}
