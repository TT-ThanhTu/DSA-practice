int maxContainers(int n, int w, int maxWeight) {
    int a= n*n;
    int b= maxWeight/w;
    if (a<b){
        return a;
    }
    return b;
    
    
}