#include <iostream>

using namespace std;

/*
    N! = N * (N-1)!
*/

int fatorial(int N){
    if(N <= 1){ // Casos bases
        return 1;
    }
    return N * fatorial (N - 1); // Recorrência
}


int main(){
    for (int i = 0; i <= 5; i++){
        cout << fatorial(i) << endl;
    }
    return 0;
}