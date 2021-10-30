#include <iostream>
#include <algorithm>

using namespace std;
int ordenaIdentificador(int s1, int s2){
    return s1 < s2;
}

int main(){
    int saida[10];
    saida[0] = 3;
    saida[1] = 6;
    saida[2] = 9;
    saida[3] = 1;
    saida[4] = 2;
    saida[5] = 7;
    saida[6] = 8;
    saida[7] = 5;
    saida[8] = 4;
    saida[9] = 0;

    sort(saida, saida+10, ordenaIdentificador);
    for (int s = 0; s < 10; s++){
        cout << saida[s];
    }
    return 0;
}