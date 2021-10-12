#include <iostream>

using namespace std;

int main(){
    int matriz[3][2];
    /*
    matriz[0][0] = 0;
    matriz[0][1] = 3;
    matriz[1][0] = 2;
    matriz[1][1] = 5; → Declarando valores manualmente na matriz
    matriz[2][0] = 4;
    matriz[2][1] = 9;
    */
    for (int l = 0; l < 3; l++){
        for (int c = 0; c < 2; c++){
            cin >> matriz[l][c];
        }
    }
    for (int l = 0; l < 3; l++){
        for (int c = 0; c < 2; c++){
            cout << matriz[l][c] << " ";
        }
        cout << endl;
    }
    return 0;
}