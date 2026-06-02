#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;
    int nuts = 0;

    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > 10) {
            nuts += arr[i] - 10;
        }
    }

    cout << nuts;
}