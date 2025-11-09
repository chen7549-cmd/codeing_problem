#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    vector<vector<string>> seat(R, vector<string>(C));
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> seat[i][j];
        }
    }
    string q;
    cin >> q;
    bool nfound = true;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (seat[i][j] == q) {
                cout <<i + 1<< " " << j + 1 << endl;
                nfound = false;
            }
        }
    }
    if (nfound) cout << "0 0";
    return 0;
}