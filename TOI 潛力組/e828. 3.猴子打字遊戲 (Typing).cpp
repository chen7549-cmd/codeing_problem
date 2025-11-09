#include <bits/stdc++.h>
using namespace std;

int edit_distance(const string &a, const string &b) {
    int n = a.size(), m = b.size();
    vector<int> prev(m + 1), curr(m + 1);
    for (int j = 0; j <= m; ++j)
        prev[j] = j * 2;  
    for (int i = 1; i <= n; ++i) {
        curr[0] = i * 2;  
        for (int j = 1; j <= m; ++j) {
            if (a[i - 1] == b[j - 1])
                curr[j] = prev[j - 1];
            else
                curr[j] = min({
                    prev[j] + 2,   
                    curr[j - 1] + 2, 
                    prev[j - 1] + 3  
                });
        }
        prev.swap(curr);
    }
    return prev[m];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string target, m1, m2, m3;
    cin >> target >> m1 >> m2 >> m3;
        int d1 = edit_distance(target, m1);
        int d2 = edit_distance(target, m2);
        int d3 = edit_distance(target, m3);
        int best = max({d1, d2, d3});
        int ans = 1, best_dist = d1;
        if (d2 < best_dist || (d2 == best_dist && 2 > ans)) {
            ans = 2;
            best_dist = d2;
        }
        if (d3 < best_dist || (d3 == best_dist && 3 > ans)) {
            ans = 3;
            best_dist = d3;
        }
        cout << ans << " " << best_dist;
    return 0;
}
