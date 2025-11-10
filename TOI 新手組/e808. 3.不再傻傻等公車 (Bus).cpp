#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,h,m;
    cin >> n;
    cin >> h >> m;
    int stime=h*60+m;
    int bus[n],min,use[n];
    for (int i = 0 ; i < n ; i++){
        cin >> min;
        bus[i]=stime+min;
        stime=bus[i];
        if (bus[i] >= 1440) bus[i]%= 1440;
        //cout << i << " " << bus[i] << endl;
    }
    int s = 1;
    while (s){
        cin >> s;
        if (s == 0) break;
        //cout << bus[s-1] << "\n";
        cout <<setw(2)<< setfill('0') << bus[s-1]/60 << ":" <<setw(2)<< setfill('0') << bus[s-1]%60 << endl;
    }
    return 0;
}