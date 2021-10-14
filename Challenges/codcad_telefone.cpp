#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    for (int c = 0; c < s.size(); c++){
        if (s[c] == 'A' or s[c] == 'B' or s[c] == 'C'){
            cout << "2";
        }else if (s[c] == 'D' or s[c] == 'E' or s[c] == 'F'){
            cout << "3";
        }else if (s[c] == 'G' or s[c] == 'H' or s[c] == 'I'){
            cout << "4";
        }else if (s[c] == 'J' or s[c] == 'K' or s[c] == 'L'){
            cout << "5";
        }else if (s[c] == 'M' or s[c] == 'N' or s[c] == 'O'){
            cout << "6";
        }else if (s[c] == 'P' or s[c] == 'Q' or s[c] == 'R' or s[c] == 'S'){
            cout << "7";
        }else if (s[c] == 'T' or s[c] == 'U' or s[c] == 'V'){
            cout << "8";
        }else if (s[c] == 'W' or s[c] == 'X' or s[c] == 'Y' or s[c] == 'Z'){
            cout << "9";
        }else{
            cout << s[c];
        }
    }
    return 0;
}