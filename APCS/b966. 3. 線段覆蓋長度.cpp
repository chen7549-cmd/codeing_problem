#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int s,e,max = -1,min = 1e7;
    int  line[999999]={0};
    for (int i = 0; i < N; i++){
        cin >> s>> e;
        for (int i = s; i < e ; i++){
            line[i]=1;
        }
        if (s < min) min = s;
        if (e > max) max = e;
    }
    int count = 0;
    for (int i = min; i < max; i++){
        if (line[i]) count++;
    }
    cout << count;
    return 0;
}