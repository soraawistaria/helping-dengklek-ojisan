#include <bits/stdc++.h>
using namespace std;

int main() {
    int P;
    cin >> P;

    int A[P], jumlah = 0;
    for(int i = 0; i < P; i++) {
        cin >> A[i];
        jumlah += A[i];
    }

    cout << jumlah;
}