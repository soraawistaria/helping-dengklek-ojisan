#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A, A + N);

    int smallest = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] == smallest) {
            smallest = A[i] + 1;
        }
    }

    cout << smallest;
}