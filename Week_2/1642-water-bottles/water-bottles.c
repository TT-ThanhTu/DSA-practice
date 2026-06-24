int numWaterBottles(int numBottles, int numExchange) {
    // numBottles, so chai nuoc day
    // numExchange, so chai rong doi sang 1 chai day
    // s=15
    // 15/4 =3 du 3   s+kq; a=kq +du
    int s=numBottles;
    int a=numBottles;
    while(a>=numExchange ){
        s+=a/numExchange;
        a=(a%numExchange) + (a/numExchange);   
    }
    return s;
}