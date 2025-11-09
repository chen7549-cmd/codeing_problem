#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> card(13);
    for (int i = 0; i < 13; i++){
        cin >> card[i];
    }
    int flower,dim,heart,black,point;
    flower = dim = heart = black = point = 0;
    for (int i = 0; i < 13; i++){
        if (card[i][0] == 'S') black++;
        else if (card[i][0] == 'H') heart++;
        else if (card[i][0] == 'D') dim++;
        else if (card[i][0] == 'C') flower++;
        if (card[i][1]=='A') point += 4;
        else if (card[i][1]=='K') point += 3;
        else if (card[i][1]=='Q') point += 2;
        else if (card[i][1]=='J') point++;
    }
    cout << black << " " << heart << " " << dim << " " << flower << endl << point;
    return 0;
}
