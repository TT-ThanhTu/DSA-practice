/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
   #include <stdlib.h>

    // 1. Cấp phát mảng chứa kết quả với kích thước tối đa có thể xảy ra
    int max_size = right - left + 1;
    int* result = (int*)malloc(max_size * sizeof(int));
    
    int count = 0;
    // 2. Vòng lặp duyệt qua từng số từ left đến right
    for (int i = left; i <= right; i++) {
        int temp = i;       // Dùng biến tạm temp để tách chữ số, không làm thay đổi biến i
        int isSelfDivide = 1; // Giả định ban đầu i là số tự chia hết

        while (temp > 0) {
            int digit = temp % 10; 

            // Điều kiện 1: Số chứa chữ số 0 -> Loại ngay để tránh lỗi chia cho 0 (i % 0)
            // Điều kiện 2: Số ban đầu (i) không chia hết cho chữ số hiện tại -> Loại
            if (digit == 0 || i % digit != 0) {
                isSelfDivide = 0; // Đánh dấu không thỏa mãn
                break;            // Thoát vòng lặp while ngay lập tức
            }

            temp /= 10; // Bỏ chữ số cuối cùng để xét chữ số tiếp theo
        }

        // Nếu sau khi kiểm tra toàn bộ chữ số mà vẫn thỏa mãn
        if (isSelfDivide == 1) {
            result[count] = i; // Thêm số i vào mảng kết quả
            count++;           // Tăng số lượng phần tử tìm được lên 1
        }
    }

    // 3. Gán số lượng phần tử thực tế vào returnSize để hệ thống chấm bài nhận biết
    *returnSize = count;

    // 4. Trả về mảng kết quả
    return result;
}