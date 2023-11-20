#include<iostream>
int adq(int);
int dgt(int, int);

int main(){
    int a = 0;
    int b = 0;
    std::cin >> b;
    std::cin >> a;
    std::cout << dgt(a, b) << std::endl;
}

int adq(int a){
    static int e = 0;
    if( a == 0){
        return e;
    }
    e += a % 10;
    return adq(a / 10);
}

int dgt(int a, int b){
    if(b <= 0){
        return a;
    }
    a %= b;
    return dgt(b, a);
}
