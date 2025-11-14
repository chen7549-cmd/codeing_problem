#include <iostream>
#include <string>
using namespace std;

int main() {
    string W,ans = "";
    cin >> W;
    bool M = true;
    if (W.size()%2) M = false;
    else 
    for (int i = 0; i < W.size()/2; i++){
        if (W[i] != W[W.size()-1-i] ) M = false;
        else ans += W[i];
    }
     
    if (M) cout << "YES\n" << ans;
    else cout << "NO";
    return 0;
}