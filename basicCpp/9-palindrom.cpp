#include <iostream>
#include <string>
using namespace std;

bool palindrom(string s) {
    if (s.substr(0 ,1) != s.substr(s.size(), 1)) {
        return false;
    } else {
        palindrom(s.substr(1));
        return true;
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << palindrom("") << endl;
    cout << palindrom("x") << endl;
    cout << palindrom("aa") << endl;
    cout << palindrom("ab") << endl;
    cout << palindrom("ini") << endl;
    cout << palindrom("itu") << endl;
    cout << palindrom("anna") << endl;
    cout << palindrom("ibu ratna antar ubi") << endl;
    cout << palindrom("rumah murah") << endl;
    cout << palindrom("aku suka rajawali bapak apabila wajar aku suka") << endl;
}
