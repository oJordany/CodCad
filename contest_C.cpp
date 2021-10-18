#include <iostream>

using namespace std;

int mdc(int M, int m){
    int aux;
    while (M % m > 0){
        aux = m;
        m = M % m;
        M = aux;
    }
    cout << m << endl;;
}

int main(){
    int n, f1, f2, limit, maior, menor;
    cin >> n;
    while (n > 0){
        cin >> f1 >> f2;
        if (f1 < f2){
            menor = f1;
            maior = f2;
        }else{
            menor = f2;
            maior = f1;
        }
        mdc(maior, menor);
        n--;
    }
    return 0;
}