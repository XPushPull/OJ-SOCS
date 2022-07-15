#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 101
#define ll long long
#define ld long double

int main(){
    ll tc; scanf("%lld",&tc);
    for(int t=0;t<tc;t++){
        ll n,x,count=0,temp;
        scanf("%lld %lld",&n,&x);
        
        ll arr[n];
        for(int i=0;i<n;i++) scanf("%lld",&arr[i]);
      
        for (int j = 1; j < n; j++) {
            for (int i = 1; i < n; i++) {
                if (arr[i-1] > arr[i]) {
                    temp=arr[i-1];
                    arr[i-1]=arr[i];
                    arr[i]=temp;
                    count++;
          }
        }
      }
    printf("Case #%d: %lld\n",t+1,count*x);
  }
}