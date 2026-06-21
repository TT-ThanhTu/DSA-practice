bool uniqueOccurrences(int* arr, int arrSize) {
    int a[2001] = {0};
    int max = 0;

    for(int i = 0; i < arrSize; i++) {
        a[arr[i] + 1000]++;

        if(arr[i] + 1000 > max) {
            max = arr[i] + 1000;
        }
    }

    for(int i = 0; i <= max; i++) {
        if(a[i] == 0) continue;

        for(int j = i + 1; j <= max; j++) {
            if(a[j] == 0) continue;

            if(a[i] == a[j]) {
                return false;
            }
        }
    }

    return true;
}