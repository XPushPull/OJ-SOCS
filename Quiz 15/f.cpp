#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
    //PushPull
#define MxN 101
#define ll long long
#define ld long double

void binary(ll n);

int main()
{
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        ll a;
        scanf("%lld", &a);
        printf("Case #%d: ", i+1);
        binary(a);
        printf("\n");
    }
}

void binary(ll n)
{
    if (n > 1){
        binary(n / 2);
    }
    printf("%lld", n % 2);
}