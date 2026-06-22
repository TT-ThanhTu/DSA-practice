/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {

    int max_size = right - left + 1;
    int* result = (int*)malloc(max_size * sizeof(int));
    
    int count = 0;
    for (int i = left; i <= right; i++) {
        int temp = i;       
        int isSelfDivide = 1; 

        while (temp > 0) {
            int digit = temp % 10; 
            if (digit == 0 || i % digit != 0) {
                isSelfDivide = 0; 
                break;            
            }

            temp /= 10; 
        }
        if (isSelfDivide == 1) {
            result[count] = i; // Thêm số i vào mảng kết quả
            count++;           // Tăng số lượng phần tử tìm được lên 1
        }
    }

    *returnSize = count;
    return result;
}