#include <iostream>

using namespace std;

bool eh_primo(int x){
    bool ver = true;

    for (int c = 2; c < x; c++){
        if (x % c == 0){
            ver = false;
        }
    }

    return ver;
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