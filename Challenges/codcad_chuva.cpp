#include <iostream>

using namespace std;

int main(){
    int n;
    int A[105][105], B[105][105], C[105][105];
    
    cin >> n;
    for(int c = 0; c < n; c++){
        for(int l = 0; l < n; l++){
            cin >> A[c][l];
        }
    }

    for(int c = 0; c < n; c++){
        for(int l = 0; l < n; l++){
            cin >> B[c][l];
        }
    }

    for(int c = 0; c < n; c++){
        for(int l = 0; l < n; l++){
            C[c][l] = A[c][l] + B[c][l] ;
        }
    }
    
    for(int c = 0; c < n; c++){
        for(int l = 0; l < n; l++){
            cout << C[c][l] << " ";
        }
        cout << endl;
    }
    return 0;
}