#include <stdio.h>
#include <stdlib.h>

int main(){
    int X,R,V;
    scanf("%d %d %d",&X,&R,&V);
    int N;
    scanf("%d",&N);
    int P,S;
    for(int i=0;i<N;i++){
        scanf("%d %d",&P,&S);
        if(abs(X-P)<=R){
            if(S<=V){
                X=P;
            }else{
                if(X<=P){
                    X-=15;
                }else{
                    X+=15;
                }
            }
        }
        
        
    }
    printf("%d",X);
    return 0;
}