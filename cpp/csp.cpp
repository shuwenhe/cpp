#include <iostream>

using namespace std;

// 高斯求和公式求和1+2+3+...+100
int gauss() {
    int sum = 0;
    sum = (1+100)*100/2;
    cout << "gauss sum=" << sum << endl;
    return 0;
}

// for循环求和1+2+3+...+100
int forSum(){
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "for sum=" << sum << endl;
    return 0;
}


int main() {
    forSum();
}