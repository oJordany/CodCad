#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int v[5] = {4, 1, 2, 5, 3};
    /*
    //bubble sort

    int ordenado = 0;
    while (ordenado == 0){
        ordenado = 1;
        for(int i = 0; i < 4; i++){
            if (v[i] > v[i + 1]){
                ordenado = 0;
                int temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++){
        cout << v[i] << endl;
    }
    //n < 10^4
    */
    sort(v,v+5); //função sort → uso da bivlioteca <algorithm>

    for (int i = 0; i < 5; i++){
        cout << v[i] << endl;
    }
    return 0;
}