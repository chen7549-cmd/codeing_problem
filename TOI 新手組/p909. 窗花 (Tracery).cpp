#include <iostream>
using namespace std;

int a[1000][1000];
int main(){
    int w,h,i,j;
    cin >> w >> h;
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            cin >> a[i][j];
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){   
            cout << a[i][j] << " ";
        }
        for(j=w-1;j>=0;j--){  
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for(i=h-1;i>=0;i--){
        for(j=0;j<w;j++){
            cout << a[i][j] << " ";
        }
        for(j=w-1;j>=0;j--){
            cout << a[i][j] << " ";

        }
        cout << endl;
    }
    return 0;
}