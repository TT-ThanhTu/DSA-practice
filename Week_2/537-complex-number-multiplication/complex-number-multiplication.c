char* complexNumberMultiply(char* num1, char* num2) {
    int a, b, c, d;

    // Đọc số thực và số ảo
    sscanf(num1, "%d+%di", &a, &b);
    sscanf(num2, "%d+%di", &c, &d);

    // Công thức nhân số phức
    int real = a * c - b * d;
    int imag = a * d + b * c;

    // Tạo chuỗi kết quả
    char *ans = (char *)malloc(30 * sizeof(char));
    sprintf(ans, "%d+%di", real, imag);

    return ans;
}