#include <iostream>
using namespace std;
int max(int s1,int s2,int s3,int s4,int R,int C){
    int m;
    if (s1 > s2&& s1 >s3 &&s1>s4) m=s1;
    else if (s2 > s3 && s2 > s4) m=s2;
    else if (s3 > s4) m=s3;
    else m=s4;
    return (m*100)/(R*C);        
    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int R,C;
    cin>>R>>C;
    int A[R][C],B[R][C];
    for(int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin>>A[i][j];
    for(int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin>>B[i][j];
    int s1=0,s2=0,s3=0,s4=0;
    for(int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            if (A[i][j] == B [i][j])
                s1++;
            if (A[i][C-1-j] == B[i][j])   
                s2++;
            if (A[R-1-i][j] == B[i][j]){
                s3++;
            }
            if (A[R-1-i][C-1-j] == B[i][j])
                s4++;
        }
    }
    //cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;
    cout<< max(s1,s2,s3,s4,R,C)<<'%';
    return 0;
}