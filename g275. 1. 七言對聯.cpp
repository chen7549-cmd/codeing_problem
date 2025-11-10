#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> s(2,vector<int>(7));
    int mach;
    while (n--){
        mach = 0;
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 7; j++){
                cin >> s[i][j];
            }
        }
        if (s[0][1] == s[0][3] || s[1][1] == s[1][3] || s[0][3] == s[0][5]  || s[1][5] == s[1][3]) cout << "A";
        else mach++;
        if (s[0][6] == 0 || s[1][6] == 1) cout <<"B";
        else mach++;
        if (s[0][1] == s[1][1] || s[0][3] == s[1][3] || s[0][5] == s[1][5]) cout << "C";
        else mach++;
        if (mach == 3) cout << "None";
        cout << endl;
    }
    return 0;
}