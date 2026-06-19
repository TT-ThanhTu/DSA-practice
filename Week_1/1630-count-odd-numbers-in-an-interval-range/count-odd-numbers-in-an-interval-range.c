int countOdds(int low, int high){
    // 1   3 5 7     9  //9-1/2  +1 =5 dung
    // 1   3 5 7    8   // 8-1/2 +1= 4
    // 2   3 5 7     9  // 9-2/2 +1= 4
    // 2  3 5 7     8   // 8-2/2 +1=4

    int s=((high-low)/2)+1;
    if (high%2==0 && low%2==0){
        return s-1;
    }

    // cach nay qua lau
    // int s=0;
    // for(int i= low; i<=high; i++){
    //     if(i%2==1){
    //         s+=1;
    //     }
    // }
return s;
}