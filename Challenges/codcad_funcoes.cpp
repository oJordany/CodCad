#include <iostream>

using namespace std;

using namespace std;

/*
tipo_de_retorno nome_da_função (arugumentos){
    Código da função
    retorno
}
*/
int VGlobal; //→ variável global

int aumentaValor (int x){
    VGlobal = VGlobal + x;
    return VGlobal;
}

double media(double x, double y, double z){
    double media = (x + y + z)/3.0; //→ x, y, z são variáveis locais
    return media;
    //cout << "teste" << endl;  →  isso não é executado, pois está depois do return
}

// Programa principal
int main(){
    cin >> VGlobal;
    cout << aumentaValor(5) << endl;
    cout << aumentaValor(1) << endl;
    cout << aumentaValor(2) << endl;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << media(2,4,6) << endl;
    //cout << x << endl;  →  Isso dá ERRO. A variável x não foi declarada dentro deste escopo
}