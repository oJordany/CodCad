#include <iostream>

using namespace std;

int main(){
    int n, a0 = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0;
    string nums;

    cin >> n;

    for (int c = 0; c < n; c++){
        cin >> nums;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == '0'){
                a0++;
            }
            if (nums[i] == '1'){
                a1++;
            }
            if (nums[i] == '2'){
                a2++;
            }
            if (nums[i] == '3'){
                a3++;
            }
            if (nums[i] == '4'){
                a4++;
            }
            if (nums[i] == '5'){
                a5++;
            }
            if (nums[i] == '6'){
                a6++;
            }
            if (nums[i] == '7'){
                a7++;
            }
            if (nums[i] == '8'){
                a8++;
            }
            if (nums[i] == '9'){
                a9++;
            }
        }
    }

    cout << "0 - " << a0 << endl;
    cout << "1 - " << a1 << endl; 
    cout << "2 - " << a2 << endl; 
    cout << "3 - " << a3 << endl; 
    cout << "4 - " << a4 << endl; 
    cout << "5 - " << a5 << endl; 
    cout << "6 - " << a6 << endl; 
    cout << "7 - " << a7 << endl; 
    cout << "8 - " << a8 << endl; 
    cout << "9 - " << a9 << endl; 

    return 0;
}