#include <iostream>
using namespace std;

int main()
{
	float M,A,N,E,sum=-1,temp,big;
	int day;
	float m=0,a=0,n=0,e=0;
	for (int i = 0 ; i < 7 ; i++) {
		cin >> M >> A >> N >> E;
        m+=M;
        a+=A;
        n+=N;
        e+=E;
		temp=M+A+N+E;
		if (temp > sum) {
			sum=temp;
			day=i+1;
		}
	}
	cout << day << endl;
	if (m > a && m > n && m >e) cout << "morning"; 
	else if (a > m && a > n && a > e) cout << "afternoon";
	else if (n > m && n > a && n >e) cout << "night";
	else cout << "early morning";
	return 0;
}