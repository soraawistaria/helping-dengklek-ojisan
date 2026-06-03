#include <bits/stdc++.h>
using namespace std;

int prima(int n){
if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a,b,c,d,x,y;
    cin >> a >> b >> c >> d;
    bool takahashi=false;

    for(int x = a; x <= b; x++){
        bool aoki=false;
        for (int y = c; y <= d; y++) {
            if (prima(x + y)) { 
                aoki = true;
                break;
            }
        }
        if(aoki==false){
            takahashi=true;
            break;
        }
    }
    
    if(takahashi==true){
        cout<<"Takahashi";
    }else{
        cout<<"Aoki";
    }
    return 0;
}