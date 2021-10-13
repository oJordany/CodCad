#include <iostream>

using namespace std;

int main(){
    /*
        char → letra
    */
    char letra;
    int numletra;
    cin >> letra;
    cout << "{ " << letra << " } " << " = " << (int)letra << endl;
    if (letra == 'a'){
        cout << "igual a 'a'\n";
    }else{
        cout << "diferente de 'a'\n";
    }
    if (letra >= 'a' and letra <= 'z'){
        cout << "letra minuscula\n";
    }
    if (letra >= 'A' and letra <= 'Z'){
        cout << "letra maiuscula\n";
    }

    cin >> numletra;
    cout << numletra << " eh a letra {" << (char)('a' -1 + numletra) << " }\n";
    return 0;
}