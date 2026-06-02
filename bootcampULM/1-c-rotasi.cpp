#include <bits/stdc++.h>
using namespace std;

int rotasi(int x) {
    int digit_pertama = x / 100;
    int dua_digit = x % 100;
    return (dua_digit * 10) + digit_pertama;
}

int main() {
    int tiga_digit, total;

    cin >> tiga_digit;
    total = 0;
    for (int i = 0; i < 3; i++){
        total += tiga_digit;
        tiga_digit= rotasi(tiga_digit);
    }
    cout << total;
}