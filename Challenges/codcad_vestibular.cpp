#include <iostream>

using namespace std;

int main(){
    int n, acertos = 0;
    string gabarito, candidato;

    cin >> n;

    cin >> gabarito;

    cin >> candidato;

    for (int c = 0; c < n; c++){
        if (candidato[c] == gabarito[c]){
            acertos++;
        }
    }
    
    cout << acertos << endl;
    return 0;
}