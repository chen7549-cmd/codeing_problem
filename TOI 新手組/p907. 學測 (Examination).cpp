#include <iostream>
using namespace std;

int main(){
    int score[6];
    for(int i = 0 ; i < 6 ; i++){
        cin>>score[i];
    }
    int std[5],flag=0;
    
    int count=0;
    for (int i = 0 ; i < 6 ; i++){
        flag=0;
        for (int j = 0 ; j < 5 ; j++){
            cin>>std[j];
        }
        for (int j = 0 ; j < 5 ; j++){
            if (score[i] == 0){
                flag=1;
                cout << "X" << endl;
                break;
            }
            if (std[j] <= score[i]){
                flag=1;
                if ( j == 0 ) cout << "A" << endl;
                else if ( j == 1 ) cout << "B" << endl;
                else if ( j == 2 ) cout << "C" << endl;
                else if ( j == 3 ) cout << "D" << endl;
                else if ( j == 4 ) cout << "E" << endl;
                break;
            }
            
        }
        if( flag == 0) cout << "F"<<endl;
    }
    
    return 0;
}