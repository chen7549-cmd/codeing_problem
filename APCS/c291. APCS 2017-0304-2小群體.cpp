#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> p(N, -1),f(N);
    for (int i = 0; i < N; ++i) {
        cin >> f[i];
    }
    int group = 0;
    int ind;
    for (int i = 0; i < N; ++i) {
        if (p[i] == -1) {  
            ind = i;
            while (p[ind] == -1) {
                p[ind] = group;  
                ind = f[ind];
            }
            group++;
        }
    }

    cout << group;
    return 0;
}