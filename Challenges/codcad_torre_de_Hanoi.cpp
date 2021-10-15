#include <iostream>
#include <cmath>

using namespace std;
/*
procedimento Hanoi(N, Orig, Dest, Temp)
     se N = 1 então
        mover o menor disco do pino Orig para o pino Dest;
     senão
        Hanoi(N-1, Orig, Temp, Dest);
        mover o N-ésimo menor disco do pino Orig para o pino Dest;
        Hanoi(N-1, Temp, Dest, Orig);
     fim-se
fim

Logo, a quantidade de movimentos em relação a quantidade de discos 
é determinada pela seguinte fórmula (2^N) - 1.
Sendo N a quantidade de discos. 
*/
int movhenoi(int N){
    int acc = 1;
    for (int c = 0; c < N; c++){
        acc *= 2;
    }
    return acc - 1;
}


int main(){
    int n, cont = 0;

    while (true){
        cin >> n;
        if (n == 0){
            break;
        }
        cont++;
        cout << "Teste " << cont << endl;
        cout << movhenoi(n) << endl;
        cout << endl;
    }

    return 0;
}