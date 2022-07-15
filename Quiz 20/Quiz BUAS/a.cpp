#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 101
#define ll long long
#define ld long double

int recsive(int m, int n);

int main(){
    int m, n; scanf("%d %d",&m ,&n);
    printf("%d\n", recsive(m,n));
}

int recsive(int m, int n){
    if (m == 0 || n == 0) return 1;
    return recsive(m-1, n) + recsive(m, n-1) + recsive(m-1, n-1);
}