#include <iostream>

using namespace std;

int main(){
    int n, v, acc, aux, maior_seq;
    maior_seq = acc = aux = 0;
    cin >> n;
    for (int c = 1; c <= n; c++){
        cin >> v;
        if (c == 1){
            acc++;
            aux = v;
            maior_seq = acc;
        }else{
            if(v == aux){
                acc++;
                if (acc > maior_seq){
                    maior_seq = acc;
                }
            }else{
                acc = 0;
                aux = v;
                acc++;
            }
        }
    }
    cout << maior_seq << "\n";
    return 0;
}
