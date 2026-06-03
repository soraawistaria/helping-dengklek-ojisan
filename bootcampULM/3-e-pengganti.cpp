#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N;

    char S[N];
    for (int i=0; i<N; i++) {
        cin >> S[i];
    }

    cin >> Q;
    char c[Q], d[Q];
    for (int i=0; i<N; i++) {
        cin >> c[i] >> d[i];
    }

    for (int i=0; i<Q; i++) {
        for(int j=0; j<N; j++) {
            if (S[j] == c[i]) {
                S[j] = d[i];
            }
        }
    }
    cout << S;
}