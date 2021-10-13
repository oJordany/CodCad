#include <iostream>

using namespace std;

int main(){
    int n, sl, sc, peso, pesomax;
    int matriz[1005][1005], stl[1005], stc[1005]; //OBS.: Para casos de testes, use um tamanho de matriz e vetores menor do que esses 
    sl = sc =peso = pesomax = 0;

    cin >> n;
    for (int l = 0; l < n; l++){
        for (int c = 0; c < n; c++){
            cin >> matriz[l][c];
        }
    }
    for (int l = 0; l < n; l++){
        sl = sc =0;
        for (int c = 0; c < n; c++){
            sl += matriz[l][c];
            sc += matriz[c][l];
        }
        stl[l] = sl;
        stc[l] = sc;
    }

    for (int l = 0; l < n; l++){
        for (int c = 0; c < n; c++){
            peso = stl[l] + stc[c] - 2*(matriz[l][c]);
            if (peso > pesomax){
                pesomax = peso;
            }
        }
    }

    cout << pesomax << endl; 
    return 0;
}