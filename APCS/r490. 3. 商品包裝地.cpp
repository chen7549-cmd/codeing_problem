#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> t(1000,0);
    string a;
    int max = -1;
    for (int i = 0; i < N; i++){
        string nums;
        cin>>nums;
        int odd=0,even=0;
        for (int j = 0; j < 12; j++){
            
            if (j%2==0){
                odd+=(int)nums[j]-48;
                //cout<<(int)nums[j]<<endl;
            }else even+=(int)nums[j]-48;
        }
        //cout<<odd<< " "<<even<<endl;
        int cp = (odd+3*even)%10+(int)nums[12]-48;
        if (cp== 0 || cp == 10){
            int temp=(nums[0]-48)*100 +(nums[1]-'0')*10+(nums[2]-'0')*1;
            t[temp]++;  
            if (t[temp] > max){
                max=t[temp];
                a=nums.substr(0,3);
            }
        }
    }
    cout <<a <<' '<< max;
    return 0;
}