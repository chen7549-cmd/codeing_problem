#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> arr[i][j];
        }
    }
    vector<int> pos; 
    int sum;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int x = arr[i][j];
            sum = 0;
            for (int dx = -x; dx <= x; dx++) {
                for (int dy = -x; dy <= x; dy++) {
                    if (abs(dx) + abs(dy) <= x) {
                        int ni = i + dx;
                        int nj = j + dy;
                        if (ni >= 0 && ni < n && nj >= 0 && nj < m) sum += arr[ni][nj];
                    }
                }
            }
            if (sum % 10 == x) {
                pos.push_back(i * m + j);
            }
        }
    }
    sort(pos.begin(), pos.end()); 
    cout << pos.size() << endl;
    for (int i = 0; i < pos.size(); i++) {
        cout << (pos[i] / m) << " " << (pos[i] % m) << endl;
    }
    return 0;
}