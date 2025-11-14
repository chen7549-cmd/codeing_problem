
int main(){
    int N,M,i,change=0;
    scanf("%d%d",&N,&M);
    int X[N];
    for(i=0;i<N;i++){
        scanf("%d",&X[i]);
    }
    int card[N],A[N/2],B[N/2];
    while(M--){
        for(i=0;i<N/2;i++){
            //printf("%d",X[i]);
            A[i]=X[i];

            B[i]=X[i+N/2];
        }

        printf("\n");
        int i=0;
        for(i=0;i<N;i++){

                 card[i*2]=A[i];
                 card[i*2+1]=B[i];
             }
            for (int i = 0; i < N; i++) {
            X[i] = card[i];
        }
}



        for(i=0;i<N;i++){
            //printf("%d--%d\n",A[i],B[i]);
            printf("%d ",X[i]);
        }

      //printf("%d\n",card[1]);


    return 0;
}