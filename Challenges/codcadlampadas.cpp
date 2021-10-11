#include <iostream>

using namespace std;

int main(){
    int n, i, a, b;
    a = b = 0;
    cin >> n;
    for (int c=1; c<=n; c++){
        cin >> i;
        if (i==1){
            if (a == 0){
                a = 1;
            }else{
                a = 0;
            }
        }else{
            if (a == 0){
                a = 1;
            }else{
                a = 0;
            }
            if (b == 0){
                b = 1;
            }else{
                b = 0;
            }
        }
    }
    cout << a << endl << b << "\n";
    return 0;
}


