#include <iostream>

using namespace std;

int main(){
    string risada, vogais="", vogaisinvert="";

    cin >> risada;

    for(int c = 0; c < risada.size(); c++){
        if (risada[c] == 'a' or 
            risada[c] == 'e' or 
            risada[c] == 'i' or 
            risada[c] == 'o' or
            risada[c] == 'u'){
                vogais += risada[c];
            }
    }

    for (int c = vogais.size() - 1; c >= 0 ; c--){
        vogaisinvert += vogais[c];
    }

    if (vogais == vogaisinvert){
        cout << "S\n";
    }else{
        cout << "N\n";
    }

    return 0;
}