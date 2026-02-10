#include <iostream>
#include <string>
using namespace std;

string biner(int n) {
    string hasil;
    if (n == 0){
        hasil += "0";
    } else if (n == 1) {
        hasil += "1";
    } else {
        if (n % 2 == 0) {
            hasil += biner(n / 2) + "0";
        } else {
            hasil += biner(n / 2) + "1";
        }
    }
    return hasil;
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << biner(0) << endl;
    cout << biner(1) << endl;
    cout << biner(512) << endl;
    cout << biner(1697) << endl;
    cout << biner(1048575) << endl;
}
