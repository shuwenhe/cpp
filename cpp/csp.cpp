#include <iostream>

using namespace std;

// gauss 
int gauss() {
    int sum = 0;
    sum = (1+100)*100/2;
    std::cout << "gauss sum=" << sum << std::endl;
    return 0;
}

// forSum
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