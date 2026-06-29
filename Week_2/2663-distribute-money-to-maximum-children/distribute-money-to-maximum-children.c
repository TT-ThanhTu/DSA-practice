int distMoney(int money, int children) {
    // Không đủ để mỗi trẻ có ít nhất 1
    if (money < children)
        return -1;

    // Phát trước mỗi trẻ 1
    money -= children;

    // Số trẻ tối đa có thể lên 8
    int ans = money / 7;

    if (ans > children)
        ans = children;

    money -= ans * 7;
    children -= ans;

    // Trường hợp tất cả trẻ đều có 8$ nhưng vẫn còn tiền dư
    if (children == 0 && money > 0)
        ans--;

    // Trường hợp còn đúng 1 trẻ và số tiền còn lại là 3
    // Khi đó trẻ cuối sẽ có 1+3=4, không hợp lệ
    if (children == 1 && money == 3)
        ans--;

    return ans;
}