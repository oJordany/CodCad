#include <iostream>

using namespace std;

int main(){
    int p, r;
    cin >> p >> r;
    if (p == 0){
        cout << "C";
    }else if (r == 1){
        cout << "A";
    }else{
        cout << "B";
    }
    return 0;
}
