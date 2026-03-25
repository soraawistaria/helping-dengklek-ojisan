#include <iostream>
using namespace std;

int main(){
    int N, M, P;
    cin >> N >> M >> P;

    int matriksA[N][M], matriksB[M][P];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> matriksA[i][j];
        }
    }

    for (int i = 0; i < M; i++){
        for (int j = 0; j < P; j++){
            cin >> matriksB[i][j];
        }
    }

    int matriksC[N][P] = {};

    for (int i = 0; i < N; i++){
        for (int j = 0; j < P; j++) {
            matriksC[i][j] = 0;
            for (int k = 0; k < M; k++) {
                matriksC[i][j] += matriksA[i][k] * matriksB[k][j];
            }
            cout << matriksC[i][j] << " ";
        }
        cout << endl;
    }
}