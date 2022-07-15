#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    int n[tc];
    for (int i = 0; i < tc; i++)
    {
        scanf("%d", &n[tc]);
        int a[n[tc]], b[n[tc]];

        for (int j = 0; j < n[tc]; j++)
        {
            scanf("%d", &a[j]);
        }
        for (int j = 0; j < n[tc]; j++)
        {
            scanf("%d", &b[j]);
        }
        printf("Case #%d:", i+1);
        for (int j = 0; j < n[tc]; j++)
        {
            printf(" %d", a[j]-b[j]);
        }
        printf("\n");
    }
    
    return 0;
}