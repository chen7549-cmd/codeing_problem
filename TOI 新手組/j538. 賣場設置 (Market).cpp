#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    int N = S.size();
    vector<int> M(N);
    string upperS = S;
    for (char &c : upperS) c = toupper(c);
    vector<vector<int>> pos(26);
    
    for (int i = 0; i < N; i++) {
        int idx = upperS[i] - 'A'; 
        pos[idx].push_back(i);
    }
    int total,count,avg,r,add;
    for (int i = 0; i < 26; i++) {
        if (pos[i].empty()) continue;
        total=0;
        for (int pos : pos[i]) {
            total += T[pos] - '0'; 
        }
        count=pos[i].size();
        avg=total / count;
        r=total % count;
        for (int j = 0; j < count; j++) {
            if (j < r) add = 1;
            else add = 0;
            M[pos[i][count- 1- j]] = avg + add;
        }
    }
    for (int i = 0; i < N; i++) {
        cout << M[i];
    }
    cout << endl;
    return 0;
}