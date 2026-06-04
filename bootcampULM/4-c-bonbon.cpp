#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.length();
    int cntB = 0;
    int cntO = 0;
    int cntN = 0;
    int total;

    for (int i =0; i<N; i++) {
        if (S[i] == 'b') {
            cntB++;
        } else if (S[i] == 'o') {
            cntO++;
        } else if (S[i] == 'n') {
            cntN++;
        }
    }

    if (cntB > 0 && cntO > 0 && cntN > 0) {
        int minimal = min(cntB, min(cntO, cntN));
        total = minimal - 1;
        if (total == -1) {
            cout << 0;
            return 0;
        } else if (minimal == 1) {
            cout << 1;
            return 0;
        }
        cout << total;
    } else {
        cout << 0;
    }
}