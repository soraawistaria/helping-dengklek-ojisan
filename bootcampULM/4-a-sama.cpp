#include <bits/stdc++.h>
using namespace std;

int main() {
    int angka[3];

    for (int i=0; i<3; i++) {
        cin >> angka[i];
    }

    if(angka[0] + angka[1] == angka[2]) {
        cout << "Yes";
    } else if(angka[0] == angka[1] && angka[1] == angka[2]) {
        cout << "Yes";
    } else if(angka[0] == angka[1] + angka[2]) {
        cout << "Yes";
    } else if(angka[1] == angka[0] + angka[2]) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}