#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.length();

    int moveX = 0;
    int moveY = 0;

    for (int i=0; i<N; i++) {
        if (S[i] == 'R') {
            moveX++;
        } else if (S[i] == 'L') {
            moveX--;
        } else if (S[i] == 'U') {
            moveY++;
        } else if (S[i] == 'D') {
            moveY--;
        } else {
            continue;
        }
    }
    cout << moveX << " " << moveY;
}