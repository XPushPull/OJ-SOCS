#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int b[a], c[a];
    int i;
    for (i = 0; i < a; i++)
    {
        scanf("%d %d", &b[i], &c[i]);
    }
    for (int j = 0;j < i; j++)
    {
        printf("%d\n", (b[j]/c[j]) << c[j]);
    }
    return 0;
}
