#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long jumlah = 0;
    vector<long long> bilangan;
    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;
        jumlah += x;
        bilangan.push_back(x);
    }

    for (int i = 0; i < N; i++) {
        cout << jumlah - bilangan[i] << endl;
    }
    
}