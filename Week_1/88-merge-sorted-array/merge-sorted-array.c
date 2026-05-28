void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int result[m+n];

    int i = 0;
    int j = 0;
    int k = 0;

    // merge 2 mảng
    while(i < m && j < n) {

        if(nums1[i] < nums2[j]) {
            result[k] = nums1[i];
            i++;
        }
        else {
            result[k] = nums2[j];
            j++;
        }

        k++;
    }

    // phần còn lại của nums1
    while(i < m) {
        result[k] = nums1[i];
        i++;
        k++;
    }

    // phần còn lại của nums2
    while(j < n) {
        result[k] = nums2[j];
        j++;
        k++;
    }

    // copy ngược lại nums1
    for(int t = 0; t < m+n; t++) {
        nums1[t] = result[t];
    }
}