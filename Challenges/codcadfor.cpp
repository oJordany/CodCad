#include <iostream>

using namespace std;

int main(){
    /*
        for (inicialização; condição_de_parada; incremento){
            COMANDOS
        }
        int x = 0
        while (condição){
            COMANDOS
            ATUALIZAÇÃO(ex.: x++)
        }

        OBS: x = x+1 → x++
             x = x-1 → x--

             break
             continue
    */
    int x;
    for (x=1; x<=5; x++){
        if (x == 2){
            continue;
        }
        cout << x << endl;
    }
    cout << "\n";
    return 0;
}
