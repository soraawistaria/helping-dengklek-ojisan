#include <bits/stdc++.h>
using namespace std;

double Jarak(int a, int b, int c, int d) {
    return sqrt(pow(a - c, 2) + pow(b - d, 2));
}

int main() {
    int N;
    cin >> N;

    int X[N], Y[N];
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    double jarak = 0.0;
    jarak += Jarak(0, 0, X[0], Y[0]);

    for(int i = 0; i < N-1 ; i++) {
        jarak += Jarak(X[i], Y[i], X[i+1], Y[i+1]);
    }

    jarak += Jarak(X[N-1], Y[N-1], 0, 0);

    cout << setprecision(21) << jarak;
}