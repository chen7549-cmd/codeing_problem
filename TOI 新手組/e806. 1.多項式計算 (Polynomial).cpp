#include <iostream>
using namespace std;

int main() {
    int MAX_SIZE = 1001;
    int N;
    int px[MAX_SIZE] = {0}, py[MAX_SIZE] = {0};
    int temp_p, temp_c;
    int max_p = -1;
    
    cin>>N;
    for(int i = 0; i < N; i++) {
        cin >> temp_p >> temp_c;
        px[temp_p] = temp_c;
        if(temp_p > max_p) {
            max_p = temp_p;
        }
    }
    
    cin>>N;
    for(int i = 0; i < N; i++) {
        cin >> temp_p >> temp_c;
        py[temp_p] = temp_c;
        if(temp_p > max_p) {
            max_p = temp_p;
        }
    }
    
    int flag = 0;
    
    for(int i = 0; i <= max_p; i++) {
        py[i] += px[i];
    }
    
    for(int i = max_p; i >= 0; i--) {
        if(py[i] != 0) {
            cout << i << ":" << py[i] << endl;
            flag = 1;
        }
    }
    
    if (!flag) {
        printf("NULL!");
    }
    
    return 0;
}