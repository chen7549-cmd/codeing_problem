#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> get(6),redem(6); 
    int e;
    for (int i = 0; i < 6; i++) cin >> get[i];
    for (int i = 0; i < 6; i++) cin >> redem[i];
    cin>>e;
    int b=0;
    int cnt=0;
    for (int i = 0; i < 6; i++){
        if (get[i] == e) b = 1;
        for (int j = 0; j < 6; j++){
            if (get[i] == redem[j]){
                cnt++;
                break;
            }
        }
    }
    if (cnt == 6) cout << 'A';
    else if (cnt == 5 && b) cout <<'B';
    else if (cnt == 5) cout << 'C';
    else if (cnt == 4 && b) cout<<'D';
    else if (cnt == 4) cout << 'E';
    else if (cnt ==3 && b) cout << 'F';
    else if (cnt == 3) cout<<'H';
    else if (cnt == 2 && b) cout <<'G';
    else cout <<'X';
    return 0;
}
