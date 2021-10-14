#include <iostream>

using namespace std;

string title(string F){

	for (int c = 0; c < F.size(); c++){
        if (c == 0){
            if (F[0] >= 97 and F[0] <= 122){
            F[0] = F[0] - 32;
            }
        }else if (F[c-1] == ' '){
            if (F[c] >= 97 and F[c] <= 122){
                F[c] = F[c] - 32;
            }
        }else if (F[c] >= 65 and F[c] <= 90){
            F[c] = F[c] + 32;
        }
    }
    return F;
}

//programa principal
int main(){
	string F;

	getline(cin, F);

	cout << title(F) << "\n";

	return 0;
}
