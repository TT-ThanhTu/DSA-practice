// Hàm trộn 2 nửa mảng đã sắp xếp (Dùng trong Merge Sort)
void merge(char** arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    // Tạo các mảng tạm thời
    char** L = (char**)malloc(n1 * sizeof(char*));
    char** R = (char**)malloc(n2 * sizeof(char*));

    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (strcmp(L[i], R[j]) <= 0) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}

// Hàm Merge Sort tự viết để sắp xếp mảng chuỗi
void mergeSort(char** arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int countWords(char** words1, int words1Size, char** words2, int words2Size) {
    // 1. Tự sắp xếp 2 mảng chuỗi bằng hàm vừa viết mất O(N log N)
    mergeSort(words1, 0, words1Size - 1);
    mergeSort(words2, 0, words2Size - 1);

    // 2. Lọc các từ xuất hiện ĐÚNG 1 LẦN trong words1
    char** unique1 = (char**)malloc(words1Size * sizeof(char*));
    int u1Size = 0;
    for (int i = 0; i < words1Size; i++) {
        if ((i == 0 || strcmp(words1[i], words1[i - 1]) != 0) &&
            (i == words1Size - 1 || strcmp(words1[i], words1[i + 1]) != 0)) {
            unique1[u1Size++] = words1[i];
        }
    }

    // 3. Lọc các từ xuất hiện ĐÚNG 1 LẦN trong words2
    char** unique2 = (char**)malloc(words2Size * sizeof(char*));
    int u2Size = 0;
    for (int i = 0; i < words2Size; i++) {
        if ((i == 0 || strcmp(words2[i], words2[i - 1]) != 0) &&
            (i == words2Size - 1 || strcmp(words2[i], words2[i + 1]) != 0)) {
            unique2[u2Size++] = words2[i];
        }
    }

    // 4. Dùng kĩ thuật 2 con trỏ so khớp (Tuyến tính O(N))
    int ans = 0;
    int p1 = 0, p2 = 0;
    while (p1 < u1Size && p2 < u2Size) {
        int cmp = strcmp(unique1[p1], unique2[p2]);
        if (cmp == 0) {
            ans++;
            p1++;
            p2++;
        } else if (cmp < 0) {
            p1++;
        } else {
            p2++;
        }
    }

    // Giải phóng mảng phụ
    free(unique1);
    free(unique2);

    return ans;
}// int countWords(char** words1, int words1Size, char** words2, int words2Size) {

//     int ans = 0;

//     for (int i = 0; i < words1Size; i++) {
//         int seen = 0;
//         for (int j = 0; j < i; j++) {
//             if (strcmp(words1[i], words1[j]) == 0) {
//                 seen = 1;
//                 break;
//             }
//         }
//         if (seen) continue;

//         int cnt1 = 0;
//         int cnt2 = 0;
//         for (int j = 0; j < words1Size; j++) {
//             if (strcmp(words1[i], words1[j]) == 0)
//                 cnt1++;
//         }
//         for (int j = 0; j < words2Size; j++) {
//             if (strcmp(words1[i], words2[j]) == 0)
//                 cnt2++;
//         }

//         if (cnt1 == 1 && cnt2 == 1)
//             ans++;
//     }

//     return ans;
// }