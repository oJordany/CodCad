#include <iostream>
#include <algorithm>

using namespace std;

int ordenaIdentificador(int s1, int s2){
    return s1 < s2;
}

int I[1005], Xi[1005][1005], saida[1005];

int main(){
    int N, C, cont, ver;
    cont = ver = 0;

    cin >> N >> C;

    for (int c = 0; c < C; c++){
        cin >> Xi[c][0] >> I[c];
        for (int i = 1; i <= I[c]; i++){
            cin >> Xi[c][i];
        }
    }
    saida[0] = Xi[0][0];
    for (int j = C-1; j >= 0; j--){
        for (int c = j-1; c >= 0; c--){
            for (int i = 1; i <= I[c]; i++){
                if (Xi[j][0] == Xi[c][i]){
                    ver = 1;
                }
            }
        }
        if (ver == 0){
            cont++;
            saida[cont] = Xi[j][0];
        }
        ver = 0;
    }
    sort(saida, saida+cont, ordenaIdentificador);
    for (int s = 0; s < cont; s++){
        cout << saida[s];
        if (s < cont - 1){
            cout << endl;
        }
    }
    return 0;
}
