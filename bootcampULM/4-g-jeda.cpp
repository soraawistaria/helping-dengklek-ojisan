#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    int A[N];
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    sort(A, A + N);

    int i = 0;
    int j = 0;

    while (i < N && j < N) {
        int selisih = A[i] - A[j];

        if (selisih == X) {
            cout << "Yes";
            return 0;
        } 

        if (selisih < X) {
            i++;
        } else {
            j ++;
        }
    }
    cout << "No";
    return 0;
}