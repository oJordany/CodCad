#include <iostream>

using namespace std;

int main(){
    int n, sl, sc, sd, sd2, auxl, auxc;
    bool ver = true;
    int matriz[11][11];
    sl = sc = sd = sd2 = auxl = auxc = 0;
    cin >> n;
    for (int l = 0; l < n; l++){
        for (int c = 0; c < n; c++){
            cin >> matriz[l][c];
        }
    }


    for (int l = 0; l < n; l++){
        for (int c = 0; c < n; c++){
            sl += matriz[l][c];
            sc += matriz[c][l];
            if (l == c){
                sd += matriz[l][c];
            }
        }

        if (l > 0){
            if (auxl != sl or auxc != sc){
                ver = false;
                break;
            }
        }
        auxl = sl;
        auxc = sc;
        sl = sc = 0;
    }


    if (auxc != auxl){
        ver = false;
    }else if (sd != auxl){
        ver = false;
    }


    for (int l = 0; l < n; l++){
        for (int c = n-1; c >= 0; c--){

            if (l + c == n -1){
                sd2 += matriz[l][c];
            }
        }
    }

    if (sd2 != sd){
        ver = false;
    }


    if (ver == true){
        cout << sd;
    }else{
        cout << -1;
    }
    
    return 0;
}