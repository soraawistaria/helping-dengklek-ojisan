#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, central;
    string S;

    cin >> S;

    T = S.size();

    central = ((T + 1) / 2) - 1;
    
    cout << S[central] << endl;
}