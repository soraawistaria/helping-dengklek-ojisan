#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;

    cin >> N;
    cin >> S;

    if (S[N-1] == 'o') {
        cout << "Yes";
    } else if (S[N-1] == 'x') {
        cout << "No";
    }
}