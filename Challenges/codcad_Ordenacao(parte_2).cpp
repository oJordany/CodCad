#include <iostream>
#include <algorithm>

using namespace std;

struct aluno{
    string nome;
    double media;
};

int func(aluno a, aluno b){
    return a.media > b.media;
}

int main(){
    aluno v[5];
    for (int i = 0; i < 5; i++){
        cin >> v[i].nome >> v[i].media;
    }

    sort (v, v+5, func);
    for (int i = 0; i < 5; i++){
        cout << v[i].nome << " " << v[i].media << endl;
    }

    /*
    int v[5] = {4, 1, 2, 5, 3};
    sort(v, v+5, func);
    for (int i = 0; i < 5; i++){
        cout << v[i] << endl;
    }
    return 0;
    */
}