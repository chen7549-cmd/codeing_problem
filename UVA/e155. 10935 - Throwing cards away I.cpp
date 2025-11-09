#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n;
    while (cin>>n){
        queue<int> que;
        std::vector<int> dis;
        if (n == 0) break;
        for (int i = 1; i <= n;i++){
            que.push(i);
        }
        while (que.size() > 1){
            
            dis.push_back(que.front());
            que.pop();
            que.push(que.front());
            que.pop();
        }
        cout << "Discarded cards: ";
        for (int i =0; i < n-1;i++){
            cout<<dis[i];
            if (i+1!=(int)dis.size()) cout<<", ";
        }
        cout<<'\n';
        cout<<"Remaining card: "<<que.front()<<endl;
    }
    return 0;
}
