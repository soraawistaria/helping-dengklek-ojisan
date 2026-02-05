#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    string output;
    long long jumlah = 0;
    long long dikali = 1;

    if (op == '+') {
        for (int i = 0; i < size(data); i++) {
            jumlah += stoi(data[i]);
        }
        output = to_string(jumlah);
    } 
    else if (op == '*') {
        for (int i = 0; i < size(data); i++) {
            dikali *= stoi(data[i]);
        }
        output = to_string(dikali);
    }
    else {
        output = "KESALAHAN";
    }
    return output;
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
