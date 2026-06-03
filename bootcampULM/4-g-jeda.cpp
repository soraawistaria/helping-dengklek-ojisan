#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    int A[N];
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    int j = 0;
    for (int i=0; i<N; i++) {
        if (A[i] - X == A[j]) {
            cout << "Yes";
            return 0;
        }
        j++;
    }
    cout << "No";
}