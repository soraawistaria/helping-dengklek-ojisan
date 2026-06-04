#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N+1];
    for (int i=0; i<=N; i++) {
        cin >> A[i];
    }

    int angka_sama = 0;
    for (int i=1; i<=N; i++) {
        if(A[i+1] == A[i]) {
            angka_sama++;
        }
    }

    if (angka_sama == 0) {
        cout << N + 1;
    } else if (angka_sama == 1) {
        cout << N;
    } else if (angka_sama > 1) {
        cout << 0;
    }
}