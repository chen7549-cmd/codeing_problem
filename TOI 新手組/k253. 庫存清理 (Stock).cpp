#include <iostream>
using namespace std;

int main() {
    int T,S,P;
    cin >>T>>S>>P;
    int money=0; 
    float c=T;
    for (int i = 0; i < S ; i++) {
        float s = c/T*100;
        int price = 0;
        if (c<0) break;
        if (s >= 80) {
            price=P/2;
        } else if (s>=60) {
            price=(P*6)/10; 
        } else if (s >= 40) {
            price=(P*8)/10; 
        } else if (s >= 20) {
            price=(P*9)/10; 
        } else {
            break; 
        }
        money+=price;
        c--;
    }
    cout<< money;
    return 0;
}