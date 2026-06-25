int totalMoney(int n) {
    int money = 0;
    int monday = 1;  // số tiền gửi vào thứ Hai tuần hiện tại

    while (n > 0) {
        int today = monday;

        for (int i = 0; i < 7 && n > 0; i++) {
            money += today;
            today++;
            n--;
        }

        monday++;
    }

    return money;
}