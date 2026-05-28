/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
     // duyệt từ cuối mảng
    for(int i = digitsSize - 1; i >= 0; i--) {

        // nếu chưa phải 9
        if(digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }

        // nếu là 9 thì thành 0
        digits[i] = 0;
    }

    // trường hợp toàn 9: 999 -> 1000
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));

    result[0] = 1;

    for(int i = 1; i <= digitsSize; i++) {
        result[i] = 0;
    }
    *returnSize= digitsSize+1;
    return result;
}
