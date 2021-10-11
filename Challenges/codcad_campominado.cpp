#include <iostream>

using namespace std;

int main()
{
    int n;
    int campo[55];
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> campo[i];
    }
    for (int i = 0; i < n; i++){
        int qntd = 0;
        qntd += campo[i];
        if (i < n-1){
            qntd += campo[i+1];
        }
        if (i > 0){
            qntd += campo[i-1]; 
        }
        cout << qntd << endl;
    }
    return 0;
}
