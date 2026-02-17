#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N, c;
    cin >> N;

    long long bestR = 1;
    long long bestC = N;

    for (int r = 1; r <= sqrt(N); r++) {
        if (N % r == 0) {
            c = N / r;
            bestR = r;
            bestC = c;
        }
    }
    cout << bestR << " " << bestC;
}