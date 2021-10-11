#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, s[10010], p;
    p = 0;
    cin >> n;

    for (int c = 0; c < n; c++){
        cin >> s[c];
    }

    for (int c = 0; c < n-2; c++){
        if (s[c] == 1 and s[c+1] == 0 and s[c+2] == 0){
            p++;
        }
    }
    
    cout << p << "\n";

    return 0;
}