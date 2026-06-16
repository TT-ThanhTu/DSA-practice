bool divisorGame(int n) {
    // game cho số n
    // người chơi chọn x là ước của n nhưng 0<x<n; và sau đó số còn lại là n=x;
    // ai không còn nước để đi thì thua
    // nhận xét là cứ còn số chẵn thì thắng mà còn số lẻ thì thua
    if (n%2==0) return true;
    return false;

    
}