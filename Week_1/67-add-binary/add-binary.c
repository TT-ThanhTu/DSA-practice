char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;

    // Khai báo mảng tĩnh có kích thước đủ lớn để bao thầu đề bài
    // Từ khóa static giúp mảng không bị xóa khi thoát hàm
    static char res[10005]; 
    
    res[10004] = '\0'; // Đặt ký tự kết thúc chuỗi ở ô cuối cùng
    int k = 10003;     // Con trỏ điền dữ liệu chạy lùi từ phải sang trái

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;

        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }

        res[k] = (sum % 2) + '0';
        carry = sum / 2;
        k--;
    }

    // Trả về địa chỉ nơi chuỗi kết quả thực sự bắt đầu
    return &res[k + 1];
}