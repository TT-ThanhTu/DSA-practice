int titleToNumber(char* columnTitle) {
    // buoc 1: de bai chuyen chu cai in hoa sang he 26 va cong tong lai
    // buoc 2: // y tuong
                    // chu cai A: 65, thi A-A+1 =1( ket qua cua A)
                    // chu cai B: 66, thi B-A+1= 2(ket qua cua B)
               // duyet chuoi, sau mot chuoi thi can cong 26
    int a=0;           
    for(int i=0; columnTitle[i]!='\0';i++){
        a=a*26 + (columnTitle[i]-'A'+1);
    }
    return a;
}