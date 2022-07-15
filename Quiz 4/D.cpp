#include<stdio.h>
int main(){
    long long int a[3], b[3], c[3], d[3];
    int i;
    for (i = 0; i < 3; i++)
    {
    scanf("(%lld+%lld)x(%lld-%lld)", &a[i],&b[i],&c[i],&d[i]);
    getchar();
    }
    for (int j = 0;j < i; j++)
    {
        if(j== i-1){
            printf("%lld", (a[j]+b[j])*(c[j]-d[j]));
            break;
        }
    printf("%lld ", (a[j]+b[j])*(c[j]-d[j]));
    }
    printf("\n");
    return 0;
}