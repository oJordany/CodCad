#include <iostream>

using namespace std;

int main(){
    int n, l, c, acc;
    acc = 0;
    cin >> n;
    while (n != 0){
        cin >> l >> c;
        if (l > c){
            acc += c;
        }
        n -= 1;
    }
    cout << acc << "\n";
    return 0;
}
