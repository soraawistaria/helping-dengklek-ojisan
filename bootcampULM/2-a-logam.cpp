#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if(A > 0 && B > 0) {
        cout << "Alloy";
    } else if (A == 0 && B > 0) {
        cout << "Silver";
    } else {
        cout << "Gold";
    }
}