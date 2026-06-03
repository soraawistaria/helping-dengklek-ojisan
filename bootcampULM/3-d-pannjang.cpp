#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    char c[N];
    int l[N];
    for(int i=0; i<N; i++) {
        cin >> c[i] >> l[i];
    }

    int cnt = 0;
    char output[101];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < l[i]; j++) {
            output[cnt] = c[i];
            cnt++;
            if (cnt == 101) {
                cout << "Too Long";
                return 0;
            }
        }
    }
    cout << output;
    return 0;
}