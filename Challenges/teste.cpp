#include <iostream>
#include <algorithm>

using namespace std;

int I[1005], Xi[1005][1005], saida[1005];

int main(){
    int N, C, cont, ver;
    cont = ver = 0;

    cin >> N >> C;  // N → qntd de pessoas infectadas  |  C → qntd de cadeias

    for (int c = 0; c < C; c++){
        cin >> Xi[c][0] >> I[c];
        for (int i = 1; i <= I[c]; i++){
            cin >> Xi[c][i];
        }
    }

    saida[0] = Xi[0][0];    //a primeira posição do vetor saida é preenchida com o 1º infectado da 1ª cadeia

    //verificação para checar se o 1º infectado de cada cadeia é novo
    for (int j = C-1; j >= 0; j--){
        for (int c = C-1; c >= 0; c--){
            for (int i = 1; i <= I[c]; i++){
                if (Xi[j][0] == Xi[c][i]){
                    ver = 1;
                    break;
                }
            }
        }
        if (ver == 0){
            cont++;
            saida[cont] = Xi[j][0];
        }
        ver = 0;
    }

    sort(saida, saida+cont); 
    for (int s = 0; s < cont; s++){
        cout << saida[s] << endl;
    }
    return 0;
}