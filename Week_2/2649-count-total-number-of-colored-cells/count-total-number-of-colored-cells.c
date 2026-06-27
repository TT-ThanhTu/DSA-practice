long long coloredCells(int n) {
    // n=1 la 1
    // n=2 la 5
    // n=3 la 13  2*3*2+1
    return (long long) 2*n*(n-1)+1;

    
}