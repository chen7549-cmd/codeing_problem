#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int score[num];
    for (int i = 0 ; i < num ; i++){
        cin >> score[i];
    }
    int temp;
    for (int i = 0 ; i < num-1 ; i++){
        for (int j = 0 ; j < num-i-1 ; j++){
            if (score[j] > score[j+1]){
                temp = score[j];
                score[j] = score[j+1];
                score[j+1] = temp;
            }
        }
    }
    for (int i = 0 ; i < num ; i++){
        cout << score[i];
        if (i < num-1) cout << " ";
    }
    cout << endl;
    int flag=0,min=score[0],low=score[num-1],a_flag=0;
    if (min < 60) flag=1;
    if (low >= 60) a_flag=1;
    for (int i = 0 ; i < num ; i++){
        if (score[i] > min && score[i] < 60){
            flag = 1;
            min = score[i];
        }
        if (score[i] >= 60 && score[i] < low){
            low = score[i];
            a_flag=1;
        }
    }
    if (flag) cout << min <<endl;
    else cout << "best case" << endl;
    if (a_flag) cout << low << endl;
    else cout << "worst case" << endl;
    return 0;
}