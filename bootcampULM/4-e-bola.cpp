#include <bits/stdc++.h>
using namespace std;

int main() {

    long long angka;
    cin >> angka;

    string output="";

    while (angka > 0) {
        if (angka % 2 == 1) {
            output.push_back('A');
            angka--;
        } else {
            output.push_back('B');
            angka /= 2;
        }
    }

    reverse(output.begin(), output.end());
    cout << output;

    return 0;
}