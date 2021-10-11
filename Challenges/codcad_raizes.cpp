#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    double r;
    cin >>  n;

    for(int c = 0; c < n; c++){
        cin >> r;
        cout.precision(4);
        cout.setf(ios::fixed);
        cout << sqrt(r) << endl;
    }
    cout << "\n";
    return 0;
}
