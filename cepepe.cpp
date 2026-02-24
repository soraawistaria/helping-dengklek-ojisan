#include <iostream>
#include <string>
using namespace std;

void draw(int A) {
    if (A <= 0) {
        return;
    }

    draw(A-1);

    for (int i = 0; i < A; i++) {
        cout << "#";
    }
    cout << endl;
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    int A = 5;
    draw(A);
}