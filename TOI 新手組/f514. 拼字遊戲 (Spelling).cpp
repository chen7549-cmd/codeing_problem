#include <iostream>
#include <string>
using namespace std;

int main() {
    string S,T;
    cin >> S >> T;
    int pos;
    for (int i = 0; i < T.size(); i++){
        pos = S.find(T[i]);
        if (S.find(T[i]) == string::npos) cout << "X ";
        else { cout << pos + 1 << " "; S[pos] = '0';}
    }
    return 0;
}