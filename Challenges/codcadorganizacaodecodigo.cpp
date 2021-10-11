#include <iostream>

using namespace std;

int main(){
    double altura;
    cin >> altura;
    if (altura > 1.80){
        cout << "alta";
    }else if(altura > 1.50){
        cout << "media";
    }else{
        cout << "baixa";
    }

}
