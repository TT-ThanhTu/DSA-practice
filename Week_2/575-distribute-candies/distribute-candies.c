int distributeCandies(int* candyType, int candyTypeSize) {

    int mark[200001] = {0};

    int kinds = 0;

    for (int i = 0; i < candyTypeSize; i++) {

        int idx = candyType[i] + 100000;

        if (mark[idx] == 0) {
            mark[idx] = 1;
            kinds++;
        }
    }

    int limit = candyTypeSize / 2;

    return (kinds < limit) ? kinds : limit;
}