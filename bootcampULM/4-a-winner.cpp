#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int babak = (A + B + C) / 7;

    if (A == 4 * babak || B == 4 * babak || C == 4 * babak) {
        cout << "YA";
    } else {
        cout << "TIDAK";
    }
}