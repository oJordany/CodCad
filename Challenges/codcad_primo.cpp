#include <iostream>

using namespace std;

bool eh_primo(int x){
    int div = 0;

    for (int c = 1; c <= x; c++){
        if (x % c == 0){
            div++;
        }
    }
    if (div == 2){
        return true;
    }else{
        return false;
    }
}


//programa principal
int main(){
    int x;

    cin >> x;

    if (eh_primo(x)){
        cout << "S" << "\n";
    }else{
        cout << "N" << "\n";
    }
    
    return 0;
}