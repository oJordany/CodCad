#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    if (x == 0){
        cout << "nulo";
    }else if (x > 0){
        cout << "positivo";
    }else{
        cout << "negativo";
    }
    return 0;
}
