#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    int B[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    sort(B, B + N);

    int C[N];
    int total = 0;
    for (int i = 0; i < N; i++) {
        C[i] = A[i] * B[i];
        total += C[i];
    }

    cout << total;

}