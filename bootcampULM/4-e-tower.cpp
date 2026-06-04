#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    for (int r=0; r<N; r++) {
        for(int c=0; c<M; c++) {
            if (r % 2 == 0) {
                cout << "W";
            } else {
                cout << "B";
            }
        }
        cout << endl;
    }
}