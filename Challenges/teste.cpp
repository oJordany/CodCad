#include <iostream>

using namespace std;

int main(){
    int t;
    string l;
    l = "eita ta doido";
    l[0] -= 32;
    l[5] -= 32;
    l[8] -= 32;
    cout << l << endl;
    return 0;
}