#include <iostream>

using namespace std;

int main(){
    int n, p, q, res;
    char c;

    cin >> n >> p >> c >> q;

    if (c == '+'){
        res = p + q;
    }else{
        res = p * q;
    }

    if (res > n){
        cout << "OVERFLOW\n";
    }else{
        cout << "OK";
    }

    return 0;
}