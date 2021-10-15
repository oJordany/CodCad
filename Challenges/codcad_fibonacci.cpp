#include <iostream>

using namespace std;

int fib(int N){
    if (N < 2){
        return 1;
    }
    return fib(N-1) + fib(N-2);
}

int main(){
    int n;
    cin >> n;
    cout << fib(n) << "\n";

    return 0;
}