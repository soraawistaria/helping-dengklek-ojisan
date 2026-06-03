#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int uk = S.length();
    for(int i = 0; i < uk ; i++) {
        if(i > 0) {
            cout << " ";
        }
        cout << S[i];
    }
}