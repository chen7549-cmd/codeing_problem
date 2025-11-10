#include <iostream>
#include <vector>

using namespace std;

int main() {
    int R,C;
    cin >> R >> C;
    vector<vector<int>> flag(R,vector<int>(C));
    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            cin >> flag[i][j];
        }
    }
    bool out = true;
    int count = 0,x,y,pos;
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            //cout << flag[i][j] << endl;
            out = true;
            for (pos = 0; pos < 8; pos++){
                x = i + dx[pos];
                y = j + dy[pos];
                if (x >= 0 && y >= 0 && x < R && y < C){ 
                    if(flag[i][j] == flag[x][y]){ 
                        out = false; 
                        break;
                    }
                }
            }
            if (out) count++;
        }
    }
    cout << count;
    return 0;
}