#include <iostream>

using namespace std;

int main(){
    int N, M, C, chave, resto, enderecos[105][205]; 
    
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> M >> C;
        for (int c = 0; c < C; c++){
            cin >> chave;
            resto = chave%M;
            if (enderecos[resto][0] != 0){
                for (int z = 1; z < 205; z++){
                    if (enderecos[resto][z] == 0){
                        enderecos[resto][z] = chave;
                        break;
                    }
                }
            }else{
                enderecos[resto][0] = chave;
            }
        }
        for (int c = 0; c < M; c++){
            cout << c;
            for (int z = 0; z < 205; z++){
                if (enderecos[c][z] == 0){
                    cout << " -> \\" << endl;
                    break;
                }else{
                    cout << " -> " << enderecos[c][z];
                }
            }
        }
        for (int i = 0; i < M; i++){
            for (int c = 0; c < 205; c++){
                if (enderecos[i][c] == 0){
                    break;
                }
                enderecos[i][c] = 0;
            }
        }
        cout << endl;
    }
    return 0;
}