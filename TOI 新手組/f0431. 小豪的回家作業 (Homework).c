#include <stdio.h>

int main(){
    int R,A;
    scanf("%d %d",&R,&A);
    if (R == A){
        A-=3;
    }
    int C=R-A,temp;
    if (C < A){
        temp=A;
        A=C;
        C=temp;
    }
    printf("%d+%d=%d\n",A,C,R);
    return 0;
}