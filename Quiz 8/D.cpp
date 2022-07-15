#include <stdio.h>
#include <string.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    getchar();
    char n[1001] = {" "};
    for (int i = 0; i < tc; i++)
    {
        scanf("%s", &n);
        printf("Case %d: ", i+1);
        for (int j = 0; j < strlen(n); j++)
        {
            if (j==strlen(n)-1)
            {
                printf("%d\n", n[j]);
                break;
            }
            printf("%d-", n[j]);
        }
        memset(n , 0 , sizeof n);
    }
    
    return 0;
}