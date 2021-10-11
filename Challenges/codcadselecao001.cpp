#include <iostream>

using namespace std;

int main(){
        /*
            > maior
            < menor
            >= maior ou igual
            <= menor ou igual
            == igual
            != diferente

            and
            or

            % resto da divisao
        */
        int x;
        cin >> x;
        if (x > 0 and x%2 == 0){
            cout << "x positivo e par\n";
        }
        else{
            if (x <= 0){
                cout << "x negativo \n";
            }
            if (x != 0){
                cout << "x impar\n";
            }
        }
        return 0;
}
