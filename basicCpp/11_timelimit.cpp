#include <iostream>
using namespace std;

int main() {
    int N, r, c;
    cin >> N;

    int r_terbaik = 1;
    int c_terbaik = N;

    for (r = 1; r < N; r++) {
        if (N % r == 0) {
            c = N / r;
            if (r <= c) {
                if ((c - r) < (c_terbaik - r_terbaik)) { //kode ini mengupdate nilai r*c yang terbaik. jika inpuutnya  bilangan prima, if tidak jalan.
                    r_terbaik = r;
                    c_terbaik = c;  
                }
            }
        }
    }
    cout << r_terbaik << " " << c_terbaik << endl;
}