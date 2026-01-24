#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N; // Membaca jumlah perintah

    deque<int> dq; // Deklarasi struktur data deque

    for (int i = 0; i < N; i++) {
        string perintah;
        cin >> perintah; // Membaca jenis perintah (misal: push_back)

        if (perintah == "push_front") {
            int x;
            cin >> x;
            dq.push_front(x); // Masukkan ke depan
        } 
        else if (perintah == "push_back") {
            int x;
            cin >> x;
            dq.push_back(x); // Masukkan ke belakang
        } 
        else if (perintah == "pop_front") {
            if (!dq.empty()) { // Pastikan tidak kosong sebelum menghapus
                dq.pop_front();
            }
        } 
        else if (perintah == "pop_back") {
            if (!dq.empty()) { // Pastikan tidak kosong sebelum menghapus
                dq.pop_back();
            }
        }
    }

    // Menampilkan hasil akhir dari depan ke belakang
    for (int elemen : dq) {
        cout << elemen << endl;
    }

    return 0;
}