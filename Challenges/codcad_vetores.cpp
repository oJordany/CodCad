#include <iostream>

using namespace std;

int main()
{
    int v[5]; // v = [[0], [1], [2], [3], [4]]
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 5;
    //ou
    int vet[5] = {1,2,3,4,5};
    cout << v[0] + v[1] << endl;
    cout << vet[1] + vet[3] << endl;
    int vt[5];
    for (int i = 0; i < 5; i++){
        cin >> vt[i];
    }
    for (int c = 0; c < 5; c++){
        cout << vet[c] << " ";
    }
    cout << endl;
    for (int j = 4; j >= 0; j--){
        cout << vt[j] << " ";
    }
    return 0;
}
