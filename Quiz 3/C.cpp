#include <stdio.h>
int main(){
    int b[3], c[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%d + %d =", &b[i], &c[i]);
    }
    for (int j = 0;j < i; j++)
    {
        printf("%d\n", b[j]+c[j]);
    }
    return 0;
}
