#include <iostream>

using namespace std;

int main(){
    char op;
    double a, b, res;
    cin >> op;
    cin >> a >> b;

    if (op == 'M'){
        res = a*b;
    }else{
        res = a/b;
    }

    cout.precision(2);
    cout.setf(ios::fixed);
    cout << res << endl;
    return 0;
}