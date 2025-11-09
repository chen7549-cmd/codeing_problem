#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int M[N];
    for (int i = 0; i < N; i++) {
        cin >> M[i];
    }
    int min = 1e7, flag = 0, ind = 0, min_ind = 0;
    for (int i = 0; i < N; i++) {
        if (min > M[i]) {
            min = M[i];
            min_ind = i;
            flag = 0;
        } else if (min == M[i]) {
            ind = i;
            flag = 1;
        }
    }
    int y;
    if (flag) {
        int target = ind - min;
        if (target < 0) y = M[0];
        else y = M[target];
    } else {
        int target = min_ind + min;
        if (target >= N) y = M[N-1];
        else y = M[target];
    }
    if (y > N) cout << M[N-1];
    else cout << M[y-1];
    return 0;
}