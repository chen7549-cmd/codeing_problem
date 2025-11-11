#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    vector<int> num(3);
    for (int i = 0; i < 3; i++) cin >> num[i];
    sort(num.begin(),num.end());
    for (auto i : num) cout << i << " ";
    cout << endl;
    
    if (num[0]+num[1] <= num[2]) cout << "No";
    else if (num[0]*num[0]+num[1]*num[1] < num[2]*num[2]) cout << "Obtuse";
    else if (num[0]*num[0]+num[1]*num[1] == num[2]*num[2]) cout << "Right";
    else if (num[0]*num[0]+num[1]*num[1] > num[2]*num[2])cout << "Acute";
    return 0;
}