#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a;
    b = 1;
    while (b <= a){
        if (a % b == 0){
            cout << b << " ";
        }
        b += 1;
    }
    cout << "\n";
    return 0;
}
