#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 101
#define ll long long
#define ld long double

int main() {
  ll n; 
  scanf("%lld",&n);
  ll cumulative[n];
  cumulative[0] = 0;
  for (int i = 1; i <= n; i++) {
    ll input; 
    scanf("%lld",&input);
    cumulative[i] = cumulative[i-1] + input;
  }
    ll m; 
    scanf("%lld",&m);
    int id = 1;
  while (m--) {
    ll q; 
    scanf("%lld",&q);
    ll lo = 1, hi = n, mid;
    while (lo <= hi) {
      mid = lo + (hi-lo)/2;
      if (cumulative[mid] == q) break;
      else if (cumulative[mid] < q) lo = mid+1;
      else hi = mid-1;
    }
    if (cumulative[mid] > q) {
      if (mid == 1) printf("Case %d: %d\n",id++,-1);
      else printf("Case #%d: %lld\n",id++,mid-1);
    }
    else printf("Case #%d: %lld\n",id++,mid);
  }
  return 0;
}