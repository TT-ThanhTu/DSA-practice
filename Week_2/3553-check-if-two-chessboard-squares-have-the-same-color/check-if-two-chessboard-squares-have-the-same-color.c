bool checkTwoChessboards(char* coordinate1, char* coordinate2) {
    // phan tich, tong a1 la 97+49 = chan mau den
    // phan tich, tong b1 la 98+49 = le mau trang
    int a= coordinate1[0]+coordinate1[1];
    int b= coordinate2[0]+coordinate2[1];
    
    if((a%2==0 && b%2==0)|| (a%2==1 && b%2==1)) return true;
    return false;
    
}