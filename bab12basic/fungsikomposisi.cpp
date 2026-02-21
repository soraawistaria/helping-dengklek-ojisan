#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int A, B, K, x;
    cin >> A;
    cin >> B;
    cin >> K;
    cin >> x;

    x = abs(A * x + B);
    int hasil = 1;

    for (int i = 0; i < K; i++) {
        hasil *= x;
    }

    cout << x << endl;
}