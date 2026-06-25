int countBalls(int lowLimit, int highLimit) {
    int count[46] = {0};
    int maxCount = 0;

    for (int i = lowLimit; i <= highLimit; i++) {
        int num = i;
        int sum = 0;

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        count[sum]++;

        if (count[sum] > maxCount) {
            maxCount = count[sum];
        }
    }

    return maxCount;
}