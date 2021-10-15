#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, tam[100005], cont = 0, bon_trocadas[100005];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tam[i];
    }

    int tam_aux[n];
    for (int i = 0; i < n; i++){
        tam_aux[i] = tam[i];
    }

    sort(tam,tam+n);
    for (int i = 0; i < n; i++){
        if (tam_aux[i] != tam[i]){
            cont++;
            if (cont > 0){
                bon_trocadas[cont - 1] = tam_aux[i];
            }
        }
    }

    sort(bon_trocadas, bon_trocadas + cont);
    cout << cont << endl;
    if (cont > 0){
        for (int i = 0; i < cont; i++){
            cout << bon_trocadas[i] << " ";
        }
    }
    cout << endl;
    return 0;
}