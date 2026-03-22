#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int counter = 0;
    for(int i = N; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << counter % 10 << " ";
            counter += 2;
        }
        cout << endl;
    }
}