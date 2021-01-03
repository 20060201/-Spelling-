#include <iostream>
#include <string>
using namespace std;

int main() {
    char T[30] = {}, S[100] = {};
    int num[30];

    cin >> S >> T;

    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 30; j++) {
            if(S[i] == T[j]) {
                num[j] = i + 1;
            }
        }
    }

    for(int i = 0; num[i] < 30; i++) {
        cout << num[i] << " ";
    }
    
    cout << endl;

}
