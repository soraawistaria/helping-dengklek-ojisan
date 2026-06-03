#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    long long stools = 0;
    int hmax = A[0];
    for(int i=1; i<N; i++) {
        if (A[i] < hmax) {
            int stool = hmax - A[i];
            stools += stool;
        } else if (A[i] >= hmax) {
            hmax = A[i];
        }
    }
    cout << stools;
}