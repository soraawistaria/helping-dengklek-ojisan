#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    set<string> daftar_nama; 
    bool ada_duplikat = false;

    for(int i = 0; i < N; i++){
        string nama, blkng;
        cin >> nama >> blkng;

        string nama_lengkap = nama + " " + blkng; 

        if(daftar_nama.count(nama_lengkap) > 0){
            ada_duplikat = true;
        }

        daftar_nama.insert(nama_lengkap);
    }

    if(ada_duplikat){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}