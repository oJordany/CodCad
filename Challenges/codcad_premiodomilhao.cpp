#include <iostream>

using namespace std;

int main(){
    int n, a, acss, cont, aux;
    cont = 0;
    acss = 1000000;
    cin >> n;
    while (n != 0){
        cin >> a;
        acss -= a;
        cont += 1;
        if (acss < 0 and aux <= 0){
            cont -= 1;
        }
        n -= 1;
        aux = acss;
    }
    cout << cont << "\n";
    return 0;
}
