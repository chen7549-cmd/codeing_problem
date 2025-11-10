#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int c[N];
    for (int i = 0 ; i < N ; i++){
          cin >> c[i];
    }
    int E;
    cin >> E;
    int q;
    cin >> q;
    int Q[q],temp;
    for (int i = 0 ; i < q ; i++){
          cin >> Q[i];
          for (int j = 0 ; j < N ; j++){
                if (c[j] == Q[i]){
                      temp=c[j];
                      c[j]=E;
                      E=temp;
                } 
          }
          
    }
    for (int i = 0 ; i < N ; i++){
          cout << c[i] << " ";
    }
    return 0;
}