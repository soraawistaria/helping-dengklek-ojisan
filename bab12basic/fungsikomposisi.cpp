#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int A, B, K, x;
    cin >> A;
    cin >> B;
    cin >> K;
    cin >> x;


    for (int i = 0; i < K; i++) {
        x = abs(A * x + B);
    }

    cout << x << endl;
}