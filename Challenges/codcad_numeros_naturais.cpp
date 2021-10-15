#include <iostream>

using namespace std;
/*
    soma(N) = 1 + 2 + 4 + 5 ... + (N - 1) + N
*/
int soma(int N){
    if (N == 1){
        return 1;
    }
    return N + soma(N-1);
}

int main(){
    int n;
    cin >> n;
    cout << soma(n) << endl;
    return 0;
}