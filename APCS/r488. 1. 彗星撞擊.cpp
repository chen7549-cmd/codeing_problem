#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int R, C, D;
    cin >> R >> C >> D;
    vector<vector<int>> event(R, vector<int>(C, 0));
    int K;
    cin >> K;
    for (int i = 0; i < K; i++) {
        int x, y;
        cin >>x>>y;
        event[x][y]++;
    }
    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        int a, b, s, d;
        cin >> a >> b >> s >> d;
        int r1 = max(0, a - s / 2);
        int r2 = min(R - 1, a + s / 2);
        int c1 = max(0, b - s / 2);
        int c2 = min(C - 1, b + s / 2);
        bool flag = false;
        for (int x = r1; x <= r2; x++) {
            for (int y = c1; y <= c2; y++) {
                if (event[x][y] > 0) {
                    flag = true;
                    break;
                }
            }
        }
        if (flag) {
            for (int x = r1; x <= r2; x++) {
                for (int y = c1; y <= c2; y++) {
                    if (event[x][y] > 0) event[x][y] = 0;
                }
            }
        } else {
            for (int x = r1; x <= r2; x++) {
                for (int y = c1; y <= c2; y++) {
                    event[x][y] -= d;
                }
            }
        }
    }
    int maxH = -1, minH = 1e9, cnt = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            int h = (event[i][j] > 0) ? D : D + event[i][j];
            maxH = max(maxH, h);
            minH = min(minH, h);
            if (event[i][j] > 0) cnt += event[i][j];
        }
    }
    cout <<maxH<<" "<<minH<<" " <<cnt;
    return 0;
}