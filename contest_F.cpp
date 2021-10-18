#include <iostream>

using namespace std;

int main(){
    int N, pos;
    string letras;
    char decod;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> letras;   
        cin >> pos;
        for (int c = 0; c < letras.size(); c++){
            decod = letras[c] - pos;
            if (decod < 65){
                decod = 'Z' - (64 - decod);
            }
            cout << decod;
        }
        cout << endl;
    }
    return 0;
}