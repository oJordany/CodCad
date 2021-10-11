#include <iostream>

using namespace std;

int main(){
    int a, b, m;
    cin >> a >> b;
    m = (a+b)/2;
    if (m >= 7){
        cout << "Aprovado";
    }else if (m >= 4){
        cout << "Recuperacao";
    }else{
        cout << "Reprovado";
    }
}
