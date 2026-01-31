#include <iostream>
#include <vector>
using namespace std;

void misteri(int& g, int a) {
    for (int i = 0; i < g; i++) {
        g *= a;  //perkalian  skalar vektor
    }
}

int main() {
    int g = 5;
    misteri(g, 10);

    int total = 0;
    for (int x = 0; x <= g; x++) {   // setiap x adalah nilai masing' v, perulangan sejumlah dengan v.size()
        total += x;
    }
    cout << total << endl;
}