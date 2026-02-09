#include <iostream>
#include <string>
using namespace std;

int hitung_vokal(string s) {
    if (s == "") {
        return 0;
    }

    char c = s[0];
    if (s[0] == 'a'|| s[0] == 'i' || s[0] == 'u' || s[0] == 'o' || s[0] == 'e') {
        return 1 + hitung_vokal(s.substr(1));
    } else {
        return 0 + hitung_vokal(s.substr(1));
    }

}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << hitung_vokal("lorem ipsum dolor sit amet fermentum egestas luctus praesent torquent justo.") << endl;
}

//substr(1) memotong indeks 1 hingga akhir string