#include <iostream>
#include <algorithm>

using namespace std;

struct piloto{
    int id, pont, pos;
};  

piloto pil[105][105];

int func(piloto a, piloto b){
    return a.pos < b.pos;
}

int func2(piloto a, piloto b){
    return a.pont > b.pont;
}

void passarPontos(int Ki, int G){
    int pont;
    cin >> pont;
    for (int i = 0; i < G; i++){
        pil[i][Ki].pont = pont;
    }
}

void somaPntsGP(int Ki, int G, int K){
    for (int i = 0; i < G; i++){
        if (i > 0){
            for (int c = 0; c < K; c++){
                if (pil[i][Ki].id == pil[i-1][c].id){
                    pil[0][c].pont += pil[i][Ki].pont; 
                }
            }
        }
    }
}

int main(){
    int G, P, S, K;

    while (true){
        cin >> G >> P;
        if (G == 0 and P == 0){
            break;
        }
        for (int i = 0; i < G; i++){
            for (int c = 0; c < P; c++){
                cin >> pil[i][c].pos;           // Colocando a posição de cada piloto
                pil[i][c].id = c + 1;
            }
            sort(pil[i], pil[i]+P, func);       // Ordenando cada piloto de cada Grande Prêmio em relação à sua posição
        }
        cin >> S;
        for (int i = 0; i < S; i++){
            cin >> K;
            for (int c = 0; c < K; c++){
                passarPontos(c, G);             // Colocando o ponto de cada piloto
            }
            for (int c = 0; c < K; c++){
                somaPntsGP(c, G, K);            // Somando todos os pontos de cada grande prêmio e colocando a soma no GP[0] da matriz pil
            }
            sort(pil[0], pil[0]+K, func2);      // Ordenando de acordo com a pontuação
            for (int c = 0; c < K; c++){
                if (pil[0][c].pont == pil[0][0].pont){
                    cout << pil[0][c].id << " ";       // Printando o id de cada piloto que tem a pontuação igual a maior pontuação
                }
            }
            cout << endl;
            for (int c = 0; c < K; c++){
                cout << pil[0][c].id << " " << pil[0][c].pont << endl;
                pil[0][c].pont = 0; 
            }
            cout << endl;
        }
    }
}
