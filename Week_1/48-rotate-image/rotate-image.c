void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    // chuyen vi
    for(int i=0; i< matrixSize;i++){
        for(int j=i+1; j<matrixSize;j++){
            int temp= matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    // dao nguoc
    for(int i=0; i< matrixSize;i++){
        int l = 0, r = matrixSize - 1;
        while (l < r) {
            int tmp = matrix[i][l];
            matrix[i][l] = matrix[i][r];
            matrix[i][r] = tmp;
            l++;
            r--;
        }
    }
    //for (int l = 0, r = n - 1; l < r; l++, r--) {
}