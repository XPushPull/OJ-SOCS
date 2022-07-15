#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char a[1001];
    for (int i = 0; i < n; i++){
        scanf("%s", &a);
        printf("Case %d: ", i+1);
        for (int j = strlen(a)-1; j >= 0; j--)
        {
            printf("%d", a[j]%2);
        }
        printf("\n");
    }
    return 0;
}