int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int a=arrivalTime + delayedTime;
    if (a<24) {
        return a;
    }
    return abs(a-24);
    
}