#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 1000001
#define ll long long
#define ld long double

ll a[MxN], m;
ll prefix[MxN], result = 0;

ll max(ll a, ll b) {
  if(a>b) return a;
	else return b;
}

int main(){
  ll n; scanf("%lld", &n);
    a[0] = 0;
    for(ll i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
    }
    scanf("%lld", &m);
    prefix[0] = 0;
    for(ll i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }
    // Sliding Window (2 pointers) Algorithm
    ll l = n + 1;
    ll r = n;
    ll curr = 0;
    while(l > 0){
      if(l > r){
        while(l > r) {
          l--;
        }
          curr = a[l];
        }else{
          while(curr > m && r > l) {
            ll temp = prefix[r] - prefix[l - 1];
            r--;
            curr = curr - temp;
            }
            if(curr <= m) {
                result = max(result , curr);
            }
            l--;
            curr = curr + (r - l + 1) * a[l];
        }
        if(curr <= m){
            result = max(result , curr);
        }
    }
    printf("%lld\n", result);
}