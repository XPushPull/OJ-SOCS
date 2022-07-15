#include<stdio.h>
#define lol long long int
int main(){
    
    long int t,arr[400001];
    lol max=0,inp;
    scanf("%ld",&t);
    for(int x = 1;x<=t;x++){
        scanf("%ld",&arr[x]);
    }
    scanf("%lld",&inp);
    for(int x = 1;x<=t;x++){
        lol sum=0,j=1;
        while(x + j - 1<= t){
        sum = 0;
            for(int y = j;y>=1;y--){
                sum += arr[x+j-y]*y;
            }
            if (sum <= inp && sum >= max){
                max = sum;
            }
        j++;
        }
    }
    printf("%lld\n",max);
    
    return 0;
}