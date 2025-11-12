#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    vector<int> a(N), b(M);
    for (int i = 0; i < N; i++) cin >> a[i];
    for (int i = 0; i < M; i++) cin >> b[i];
    for (int i = 0; i <= N - M; i++) {
        bool match = 1;
        for (int j = 0; j < M; j++) {
            if (a[i + j] != b[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            cout << i+1;
            return 0;
        }
    }
    cout << "not found";
    return 0;
}
