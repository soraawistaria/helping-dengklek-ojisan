#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 1) {
        return 1;
    } 
    return n * factorial(n-1);
}

int main() {
    string S;
    cin >> S;
    unordered_map<char, int> frekuensi;

    int N = S.size();

    for (char c : S) {
        frekuensi[c]++;
    }

    int penyebut = 1;
    for (auto pair : frekuensi) {
        penyebut *= factorial(pair.second);
    }

    int jawaban = factorial(N) / penyebut;
    cout << jawaban;
}