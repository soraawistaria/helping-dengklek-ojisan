#include <iostream>
#include <string>
using namespace std;

bool palindrom(string s) {
    // string dibalik = "";
    // bool answer = false;

    if (s.length() <= 1) {
        return false;
    } else if (s[0] == s[s.length()-1]) {
        return (s.substr(1), s.length() -2);
        
    } else {
        return false;
    }

    // return answer;
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << palindrom("ibu ratna antar ubi") << endl;
}
