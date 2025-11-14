#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, K;
vector<int> x;

bool check(int d) {
    int count = 1;              
    int cover = x[0] + d;        

    for (int i = 1; i < N; i++) {
        if (x[i] > cover) {     
            count++;
            cover = x[i] + d;   
        }
    }
    return count <= K;           
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;
    x.resize(N);
    for (int i = 0; i < N; i++) cin >> x[i];
    sort(x.begin(), x.end());

    int l = 0, r = x.back() - x.front();  
    while (l < r) {
        int mid = (l + r) / 2;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }

    cout << r << "\n";
    return 0;
}