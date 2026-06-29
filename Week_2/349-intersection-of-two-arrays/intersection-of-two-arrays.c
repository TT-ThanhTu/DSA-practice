/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
   
int *a = malloc((nums1Size < nums2Size ? nums1Size : nums2Size) * sizeof(int));
int k = 0;

for (int i = 0; i < nums1Size; i++) {
    for (int j = 0; j < nums2Size; j++) {
        if (nums1[i] == nums2[j]) {

            int exist = 0;
            for (int t = 0; t < k; t++) {
                if (a[t] == nums1[i]) {
                    exist = 1;
                    break;
                }
            }

            if (!exist)
                a[k++] = nums1[i];

            break; // tránh tìm tiếp cùng giá trị trong nums2
        }
    }
}

*returnSize = k;
return a;
}