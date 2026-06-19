int maximumProduct(int* nums, int numsSize) {
    // Khởi tạo 3 giá trị lớn nhất với số nhỏ nhất có thể của kiểu int
    int max1 = -1001, max2 = -1001, max3 = -1001;
    // Khởi tạo 2 giá trị nhỏ nhất với số lớn nhất có thể của kiểu int
    int min1 = 1001, min2 = 1001;

    // Duyệt qua mảng đúng 1 lần duy nhất - Độ phức tạp O(N)
    for (int i = 0; i < numsSize; i++) {
        int val = nums[i];

        // 1. Cập nhật top 3 số lớn nhất
        if (val > max1) {
            max3 = max2;
            max2 = max1;
            max1 = val;
        } else if (val > max2) {
            max3 = max2;
            max2 = val;
        } else if (val > max3) {
            max3 = val;
        }

        // 2. Cập nhật top 2 số nhỏ nhất
        if (val < min1) {
            min2 = min1;
            min1 = val;
        } else if (val < min2) {
            min2 = val;
        }
    }

    // Tính toán tích theo 2 trường hợp (ép kiểu long long để tránh tràn số khi nhân)
    long long case1 = (long long)max1 * max2 * max3;
    long long case2 = (long long)max1 * min1 * min2;

    // Trả về giá trị lớn hơn bằng toán tử ba ngôi (thay thế cho hàm max)
    return (case1 > case2) ? (int)case1 : (int)case2;
}

    


    // cach nay dung nhung timelimit
    // for(int i=0; i<numsSize; i++){
    //     for(int j=i+1; j<numsSize; j++){
    //         if (nums[i]>nums[j]){
    //             int temp=nums[i];
    //             nums[i]=nums[j];
    //             nums[j]=temp;
    //         }
    //     }
    // }
    // long long a= (long long) nums[numsSize-1]*nums[numsSize-2]*nums[numsSize-3];
    // long long b= (long long) nums[numsSize-1]*nums[0]*nums[1];
    // if (a>b){
    //     return a;
    // }
    // return b;


    // cach nay dung nhung time limit
    // long long max= nums[0]*nums[1]*nums[2];
    // for(long long i=0; i< numsSize; i++){
    //     for(long long j=i+1; j<numsSize; j++){
    //         for(int k=j+1; k<numsSize; k++){
    //             long long a= (long long) nums[i]*nums[j]*nums[k];
    //             if( a> max){
    //                 max=a;
    //             }    
    //         }
    //     }
    // }
    // return max;
    
