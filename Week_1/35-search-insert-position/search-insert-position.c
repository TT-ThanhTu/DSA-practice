int searchInsert(int* nums, int numsSize, int target) {
    // tim kiem phan tu mong muon tra ve chi so
    for (int i=0; i< numsSize; i++){
        if (nums[i]== target){
            return i;
        }
        if (nums[i]>target){ // vị trí chèn
            return i;
        }
    }
    return numsSize; // 
}