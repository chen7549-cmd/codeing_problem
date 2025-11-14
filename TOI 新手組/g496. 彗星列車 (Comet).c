#include <stdio.h>

int main()
{
    int A,S;
    scanf("%d %d",&A,&S);
    int t=S/A;
    if(S%A){
        t++;
    }
    printf("%d",t);
    return 0;
}