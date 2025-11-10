#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int X[N], sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> X[i];
        sum += X[i];
    }
    int avg = sum / N;
    int max_idx = distance(X, max_element(X, X + N));
    int min_idx = distance(X, min_element(X, X + N));
    int ans = X[max_idx] - avg;
    X[max_idx] -= ans;
    X[min_idx] += ans;
    for (int i = 0; i < N; i++) {
        cout << X[i] << " ";
    }
    return 0;
}