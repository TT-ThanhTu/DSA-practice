int accountBalanceAfterPurchase(int purchaseAmount) {
    // tuc la mua voi gia la boi so gan nhat cua 10 va tra lai so tien thua
    int roundedAmount = ((purchaseAmount + 5) / 10) * 10;
    return 100 - roundedAmount;
   
}