#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int A[n], jumlah = 0;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
        jumlah += A[i];
    }

    cout << jumlah;
}