#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    vector<long long> faktor;
    for (long long i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            faktor.push_back(i); 
            
            if (i != N / i) {
                faktor.push_back(N / i); 
            }
        }
    }

    sort(faktor.begin(), faktor.end());

    for (long long f : faktor) {
        cout << f << "\n";
    }
}