#include <iostream>
#include <vector>
using namespace std;

int main() {
    int R, C, M;
    cin >> R >> C >> M;

    vector<vector<int>> mir(11,vector<int>(11)),temp;
    temp = mir;
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> mir[i][j];
    int a[M];
    for (int i = 0; i < M; i++) cin >> a[i];
    for (int k = M-1; k >= 0; k--) {
        if (a[k]) { 
            for (int i = 0; i < R; i++){
                temp[i] = mir[R-1-i];
                temp[R-1-i] = mir[i];
            }
            mir = temp;
        } else { 
            for (int i = 0; i < R; i++)
                for (int j = 0; j < C; j++)
                    temp[C-1 - j][i] = mir[i][j];
            swap(R, C);
            mir = temp;
        }
    }
    cout << R << " " << C << "\n";
    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            cout << mir[i][j] << " ";
        }cout << endl;
    }

    return 0;
}