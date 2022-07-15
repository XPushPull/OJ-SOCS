#include <stdio.h>      
#include <stdlib.h>
#include <string.h>
#include <math.h>
//PushPull
#define MxN 101
#define ll long long
#define ld long double
int main(){
  int tc; scanf("%d", &tc);
    ll b, c;
    for(int i = 0; i < tc; i++){
      scanf("%lld %lld", &b, &c);
        ll arr[b + 20];
      for(int j = 0; j < b; j++) scanf("%lld", &arr[j]);
        int len = 0;
        for(int j = 0; j < b; j++){
          ll ttl = 0;
          int count = 0;
            for(int k = 0; j + k < b; k++){
                if(ttl + arr[j + k] <= c){
                        ttl = ttl + arr[j + k];
                    count++;
                } 
                else break;
            }
            if(count > len) len = count;
        }
      printf("Case #%d: ", i + 1);
    if(len == 0) len = -1;
    printf("%d\n", len);
  }
}