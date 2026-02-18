#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> numbers;

    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        numbers.push_back(x);
    }

    long long highest =-10000000000;
    long long lowest = 10000000000;

    for (int i = 0; i < N; i++) {
        if (numbers[i] > highest) {
            highest = numbers[i];
        } 
        if (numbers[i] < lowest) {
            lowest = numbers[i];
        }

    }

    cout << highest << " " << lowest;
}