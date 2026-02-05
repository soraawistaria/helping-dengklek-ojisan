#include <iostream>
using namespace std;

int main() {
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };

    int harga_jual[3] = {100, 120, 150};
    int total_merk1 = 0;
    int total_merk2 = 0;
    int total_merk3 = 0;

    for (int a = 0; a < 4; a++) {
        total_merk1 += luas[a][0] * harga_jual[0];
        total_merk2 += luas[a][1] * harga_jual[1];
        total_merk3 += luas[a][2] * harga_jual[2];
    }
    cout << total_merk1 << endl;
    cout << total_merk2 << endl;
    cout << total_merk3 << endl;
}