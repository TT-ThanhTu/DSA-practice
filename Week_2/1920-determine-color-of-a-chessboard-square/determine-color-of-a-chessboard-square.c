bool squareIsWhite(char* coordinates) {
    // a=97,  1=49  tong chan  den false
    // b=98.  1=49  tong le   trang true
    // b=98   2=50  tong chan  den false
   int n= coordinates[0]+coordinates[1];
   if(n%2==0){
    return false;
   }
   return true;   
}