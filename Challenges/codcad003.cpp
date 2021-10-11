#include <iostream>

using namespace std;

int main(){
    int raio;
    double pi = 3.14159;

    cin >> raio;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << raio*raio*pi << "\n";
    return 0;
}
