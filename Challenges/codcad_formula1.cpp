#include <iostream>
#include <algorithm>

using namespace std;

struct piloto{
    int id, pontos, posicao;
};

int ordenaPelaPosicao(piloto a, piloto b){
    return a.posicao < b.posicao;
}

int ordenaPeloId(piloto a, piloto b){
    return a.id < b.id;
}

int ordenaPelosPontos(piloto a, piloto b){
    return a.pontos > b.pontos;
}

int main(){
    int G, P, S, K, Ki;
    piloto matriz[105][105];                    //A 1ª dimensão da matriz é a quantidade de grandes prêmios e a segunda contém os pilotos
    piloto TotPont[105];                        //Vetor que recebe o total das pontuações de cada piloto
    
    while (true){
        cin >> G >> P;
        if ( G == 0 and P == 0){
            break;
        }
        for (int i = 0; i < G; i++){
            for (int c = 0; c < P; c++){
                cin >> matriz[i][c].posicao;        //Colocando a posição que cada piloto chegou
                matriz[i][c].id = c + 1;            //Colocando o id de cada piloto
            }
        }

        cin >> S;
        for (int i = 0; i < S; i++){
            for (int i = 0; i < P; i++){
                TotPont[i].pontos = TotPont[i].id = 0;
            }

            //Ordenação de acordo com a posição
            for (int i = 0; i < G; i++){
                sort(matriz[i], matriz[i]+P, ordenaPelaPosicao);     
            }

            cin >> K;
            for (int c = 0; c < K; c++){
                cin >> Ki;
                for (int g = 0; g < G; g++){
                    matriz[g][c].pontos = Ki;
                }
            }

            //Ordenação de acordo com o id
            for (int i = 0; i < G; i++){
                sort(matriz[i], matriz[i]+P, ordenaPeloId);
            }

            //TotPont vai recebendo a pontuação de cada piloto em cada grande prêmio e vai somando
            for (int i = 0; i < P; i++){
                for (int c = 0; c < G; c++){
                    TotPont[i].pontos += matriz[c][i].pontos;       
                    TotPont[i].id = matriz[c][i].id;
                    matriz[c][i].pontos = 0;
                }
            }

            //Ordenação de acordo com os pontos
            sort(TotPont, TotPont+P, ordenaPelosPontos);

            //Print do Id do(s) piloto(s) com mais pontos
            for (int i = 0; i <= K; i++){
                if (TotPont[i].pontos == TotPont[0].pontos){
                    cout << TotPont[i].id << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}