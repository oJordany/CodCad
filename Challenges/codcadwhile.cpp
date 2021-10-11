#include <iostream>

using namespace std;

int main(){
    /*
        while (condição){
            COMANDO
        }
    */
    int a, b;
    cin >> a >> b;
    while (a <= b){
        if (a % 2 == 0){
            cout << a << endl;
        }
        a += 1;
    }
    cout << "Saiu do while: " << a;
}
