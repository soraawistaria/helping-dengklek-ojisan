#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * faktorial(n - 1);
}

int main() {
    cout << faktorial(1) << endl;
}