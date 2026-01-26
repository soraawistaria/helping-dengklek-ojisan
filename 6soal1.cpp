#include <iostream>
using namespace std;

int main() {
    int luas1 = 225 * 335; 
    int luas2 = 215 * 394;
    int luas3 = 198 * 400;
    int luas4 = 314 * 298;
    int luas5 = 299 * 278;

    int hasil = 0;

    cout << luas1 << endl;
    cout << luas2 << endl;
    cout << luas3 << endl;
    cout << luas4 << endl;
    cout << luas5 << endl;


    if (luas1 >= 80000) {
        hasil++;
    }

    if (luas2 >= 80000) {
        hasil++;
    }

    if (luas3 >= 80000) {
        hasil++;
    }

    if (luas4 >= 80000) {
        hasil++;
    }

    if (luas5 >= 80000) {
        hasil++;
    }

    cout << hasil << endl;
}
