#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 1000001
#define MaxN 1001
#define ll long long int
#define ld long double

ll n;
ll m;
ll totalFix = 0;
ll arr[MxN];

ll result=0;
ll f(ll x, ll k) {
    if (k == 1)
        return arr[x];
    return  arr[x]*k + f(x + 1, k - 1);
}

int main() {
    scanf("%lld", &n);
    for (ll i = 1; i <= n; i++) {
        scanf("%lld", &arr[i]);
    }
    scanf("%lld", &m);
    for (ll x = 1; x <= n; x++) {
        for (ll k = n - (x - 1); k > 0; k--) {
            ll buf = f(x, k);
            if (buf <= m && buf > result)result = buf;
        }
    }
    printf("%lld\n", result);
    return 0;
}