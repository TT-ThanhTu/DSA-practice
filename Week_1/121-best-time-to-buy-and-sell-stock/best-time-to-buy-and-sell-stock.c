int maxProfit(int* prices, int pricesSize) {
int a=0;
int min=prices[0];
for(int i=0; i<pricesSize;i++){
    if (prices[i]<min){
        min=prices[i];
    }
     if(prices[i] - min > a) {
            a = prices[i] - min;
    }
}
    return a;
}