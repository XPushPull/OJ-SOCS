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
    for (int i = 0; i < tc; i++){
      ll n = 0, k = 0;
      scanf("%lld %lld", &n, &k);
      ll arr[n] = {}, count = 0;
      for (long long int j = 0; j < n; j++)
        {
          scanf("%lld" , &arr[j]);
          if(arr[j] >= k) count++;
        }
        printf("Case #%d: %lld\n", i+1, count);
    }
    return 0;
}