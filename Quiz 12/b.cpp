#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MxN 255
#define ll long long
#define ld long double

int main(){
    ll n;
    ll tot = 0;
    scanf("%lld", &n);

    for(int i=0;i<n;i++){
        ll arr[n];
        scanf("%lld", &arr[n]);
    
        if(arr[n]>=1){
            tot += arr[n];
        }
        if(arr[n]<0){
        arr[n] = 0;
        }
    }
    printf("%lld\n", tot);
    return 0;
}