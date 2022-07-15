#include  <stdio.h>
int main(){

    long long tc;
    scanf("%lld", &tc);
    for(int i=0;i<tc;i++){
        long long N, M, O;
        scanf("%lld %lld %lld", &N, &M, &O);


        if(N+M>O && M+O>N && N+O>M){
            printf("Case #%lld: Yes\n", i+1);
        }else{
            printf("Case #%lld: No\n", i+1);
        }


    }

return 0;
}