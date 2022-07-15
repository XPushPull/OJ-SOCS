#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 100001
#define ll long long
#define ld long double

ll Fib(ll a) {
  if (a == 1) return 1;
  else if (a % 2 != 0) return Fib(a-1) + Fib(a+1);
  else if (a % 2 == 0) return Fib(a/2);
}

int main(){
  int tc; 
  scanf("%d",&tc);
  for (int i = 0; i < tc; i++) {
    ll a;
    scanf("%lld",&a);
    printf("Case #%d: %lld\n", i++ ,Fib(a));
  }
  return 0;
}