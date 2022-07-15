#include <stdio.h>
#include <string.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    char n[1001];
    for (int i = 0; i < tc; i++)
    {
        scanf("%s", &n);
        printf("Case #%d : ", i+1);
        for (int j = strlen(n)-1; j >= 0; j--)
        {
            printf("%c", n[j]);
        }
        printf("\n");
    }
    
    return 0;
}