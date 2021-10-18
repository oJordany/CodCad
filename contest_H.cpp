#include <iostream>

using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    if (A > B and B <= C or A < B and B-A <= C-B or A > B and A-B > B-C or A == B and B < C){
        cout << ":)\n";
    }else if(A < B and B >= C or A < B and B-A > C-B or A > B and A-B <= B-C or A == B and B >= C){
        cout << ":(\n";
    }
    cout << endl;
    return 0;
}