#include <iostream>

using namespace std;

int main(){
    string nome;
    string s = "ola", d = "codacad";
    string nova = " ";
    string linhatoda;
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    nova = s +  nova + d; // "ola" + " " + "codcad"

    cout << nova << endl;

    getline(cin, linhatoda); //lê tudo q o usuário botar na linha e não apenas
    cout << linhatoda << " com tamanho de " << linhatoda.size() << " carcateres \n";  

    cin >> nome;

    cout << nome << " com tamanho de " << nome.size() << " caracteres."<<endl;

    for (int c = 0; c < nome.size(); c++){
        cout << nome[c] << endl;
        if (nome[c] == 'a'){
            a++;
        }
        if (nome[c] == 'e'){
            e++;
        }
        if (nome[c] == 'i'){
            i++;
        }
        if (nome[c] == 'o'){
            o++;
        }
        if (nome[c] == 'u'){
            u++;
        }
    }

    cout << a << endl;
    cout << e << endl;
    cout << i << endl;
    cout << o << endl;
    cout << u << endl;
    return 0;
}

