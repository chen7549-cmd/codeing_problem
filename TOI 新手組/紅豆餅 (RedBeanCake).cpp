#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int item[6]={0};
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        item[a]++;
    } 
    int g=item[0];
    int r=item[1]+item[2]+item[3]+item[4]+item[5];
    int set= g>r ? r:g;
    int tot=set*59;
    g-=set;
    r-=set;
    tot += g*50+r*20;
    cout << item[0];
    for (int i = 1; i <= 5; i++){
        cout << " " << item[i];
    }
    cout << " " << tot;
    return 0;
}
