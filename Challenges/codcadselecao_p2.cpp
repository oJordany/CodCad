#include <iostream>

using namespace std;

int main(){
    /*
        > 1.80 alta
        > 1.50 media
        >= 1.50 baixa
    */
    double altura;
    cin >> altura;
    if (altura > 1.80){
        cout << "alta\n";
    }else if(altura > 1.50){
        cout << "media\n";
    }else{
        cout << "baixa\n";
    }
    return 0;
}
