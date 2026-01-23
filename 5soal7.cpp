// membuat bentuk X dengan * dan sisanya pake .

#include <iostream>
using namespace std;

int main() {
    int N = 10;

    for (int i = 1; i <= N; i++) {
        if (i <= N/2){
            for(int j = 1; j <= N; j++) {
                if(i == j || i + j - 1 == N) {
                    cout << "*";
                }
                else {
                    cout << ".";
                }
            }
            cout << endl;
        }
        else {
            for(int j = N; j >= 1; j--) {
                if(i == j || i + j - 1 == N) {
                    cout << "*";
                }
                else {
                    cout << ".";
                }
            }
            cout << endl;
        }
    }
}
