#include <iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N;
    int x[2*N+1], len=0;
    for (int i = 0; i < 2*N+1; i++){
        cin >> x[i];
        len+=x[i];
    }
    int l[len], s=0;
    for (int i = 0; i < 2*N+1; i++){
        for (int j = s; j < s+x[i]; j++){
            if (i % 2 != 0) l[j] = 2;
            else l[j] = 1;
        }
        s += x[i];
    }

    cin >> M;
    int y[2*M-1], s_len=0;
    for (int i = 0; i < 2*M-1; i++){
        cin >> y[i];
        s_len += y[i];
    }
    int sh[s_len];
    s=0;
    for (int i = 0; i < 2*M-1; i++){
        for (int j = s; j < s+y[i]; j++){
            if (i % 2 != 0) sh[j]=1;
            else sh[j]=2;
        }
        s+=y[i];
    }
    int flag=0;
    for (int i = 0; i <= len-s_len; i++){
        flag = 1;
        for (int j = 0; j < s_len; j++){
            if (l[i + j] + sh[j] > 3){
                flag = 0;
                break;
            }
        }
        if (flag) break;
    }
    if (flag) cout << "YES";
    else cout << "NO";
    return 0;
}
