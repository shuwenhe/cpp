#include <iostream>

using namespace std;

int main() {
    int n = 7; 

    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << '\n';
    }

    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << '\n';
    }
}
