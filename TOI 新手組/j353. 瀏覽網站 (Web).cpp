#include <iostream>
using namespace std;

int main() {
    int X, Y;
    int types[101] = {0};
    
    while (true) {
        cin >> X >> Y;
        if (X == -1 && Y == -1) break;
        
        if (X == 1) {
            types[Y]++; 
        }
        else if (X == 0) {
            types[Y] = 0; 
        }
    }
    
    int total = 0;
    for (int i = 0; i <= 100; i++) {
        total += types[i]; 
    }
    
    cout << total;
    return 0;
}
