#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int num[N],i;
    for(i=1;i<=N;i++){
        num[i]=i;
    }
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    for(i=N;i>=1;i--){
        if(num[i]!=a && num[i]!=b && num[i]!=c){
            printf("No. %d\n",num[i]);
        }

    }
    return 0;
}