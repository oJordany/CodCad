#include <iostream>

using namespace std;

int main(){
    int n, q[10010], distE, distD;
    cin >> n;
    int fita[n];
    for (int c = 0; c < n; c++){
        cin >> q[c];
    }
    for (int c = 0; c < n; c++){
        distE = distD = 0;
        int i = c;
        while (i < n){
            if (q[i] == 0){
                distD = i - c;
                if (distD > 9){
                    distD = 9;
                }
                break;
            }
            i++;
        }
        i = c;
        while (i >= 0){
            if (q[i] == 0){
                distE = c - i;
                if (distE > 9){
                    distE = 9;
                }
                break;
            }
            i--;
         }
        if (distE == 0){
            fita[c] = distD;
        }else if (distD == 0){
            fita[c] = distE;
        }else if (distD <= distE){
            fita[c] = distD;
        }else{
            fita[c] = distE;
        }
    }
    for (int c = 0; c < n; c++){
        cout << fita[c] << " ";
    }
    return 0;
}