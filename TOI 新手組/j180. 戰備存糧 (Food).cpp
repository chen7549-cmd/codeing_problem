#include <iostream>

using namespace std;

int main(){
    int N,E;

    while(1){
    cin>>N;
    if(N==-1){
        break;
    }
    cin>>E;
    int T=N*E;
    int day=0;
    while(T>0){
        day++;
        T-=N;
        N=T/E;
        if(T%E>0){
            N++;
        }
    }
    cout<<day<<endl;
    }
    return 0;
}