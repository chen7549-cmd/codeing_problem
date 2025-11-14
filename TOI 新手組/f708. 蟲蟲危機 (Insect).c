#include <stdio.h>

int main()
{
    int M,N;
    scanf("%d %d",&M,&N);
    int a,a_h=0,g_h=0;
    for(int i=0;i<M;i++){
        scanf("%d",&a);
        a_h+=a;
    }
    int G;
    for(int i=0;i<N;i++){
        scanf("%d",&G);
        g_h+=G;
    }
    if(N>=M){
        printf("No");
    }else if(a_h<=g_h){
        printf("No");
    }else{
        printf("Yes");
    }
    return 0;
}