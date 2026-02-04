#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : s) {
        char sBesar = c - 'a' + 'A';

        // cout << sBesar;

        char sAfter;
        if (sBesar == 'Z') {
            sAfter = 'A';
        } else {
            sAfter = sBesar + 1;
        }
        
        cout << sAfter;
    }
    cout << endl;
}
