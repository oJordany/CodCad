#include <iostream>

using namespace std;

int main(){
    int T;
    string S, R;
    cin >> T;
    for (int i = 1; i <= T; i++){
        cin >> S >> R;
        if (S == "tesoura" and R == "papel" or S == "papel" and R == "pedra" or
            S == "pedra" and R == "lagarto" or S == "lagarto" and R == "Spock" or
            S == "Spock" and R == "tesoura" or S == "tesoura" and R == "lagarto" or
            S == "lagarto" and R == "papel" or S == "papel" and R == "Spock" or
            S == "Spock" and R == "pedra" or S == "pedra" and R == "tesoura"){
                cout << "Caso #" << i << ": Bazinga!\n";
            }
        else if (S != R){
            cout << "Caso #" << i << ": Raj trapaceou!\n";
        }else{
            cout << "Caso #" << i << ": De novo!\n";
        }
    }
    return 0;
}