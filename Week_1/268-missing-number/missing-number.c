int missingNumber(int* nums, int numsSize) {
    // cach 1
    // buoc 1: sap xep mang be den lon
    // duyet phan tu mang tim ra so thieu

    // cach 2 : hay hon
    // tinh tong all
    // tinh tong hien tai
    // tra ve hieu
// cong thuc cap so cong s= n(a1+an)/2

    int sum1= ((numsSize+1) *(0+ numsSize))/2;
    int sum2=0;
    for (int i=0; i<numsSize; i++){
        sum2 +=nums[i];
    }
    return sum1-sum2;
}

      