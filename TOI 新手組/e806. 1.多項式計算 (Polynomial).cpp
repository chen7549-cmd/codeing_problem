#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    vector<vector<int>> trea_map(N,vector<int>(M)),s_map(N,vector<int>(M));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> trea_map[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> s_map[i][j];
    int sum;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            sum = 0;
            sum += s_map[i][j];
            for (int k = 0; k <N; k++){
                if (k == i) continue;
                sum+=s_map[k][j];
            }
            for (int k = 0; k <M; k++){
                if (j == k) continue;
                sum+=s_map[i][k];
            }
            if (sum%2 != 0){
                if (trea_map[i][j]) trea_map[i][j] = 0;
                else trea_map[i][j] = 1;
            }
        }
    }
    for (auto i:trea_map){
        for (int num:i )
            cout << num <<" ";
        cout << '\n';
    }        
    return 0;
}