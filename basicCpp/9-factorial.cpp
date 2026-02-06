#include <iostream>
using namespace std;

int faktorial(int n) {

    long long hasil = 1;
    if (n <= 1) {
        hasil = 1;
    } else {
        for (int i = 2; i <= n; i++) {
            hasil *= i;
        }
    }
    return hasil;
}

int main() {
    cout << faktorial(12) << endl;
}
