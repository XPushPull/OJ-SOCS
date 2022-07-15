#include <stdio.h>

//B

int main(int argc, char const *argv[])
{
    int tc;
    scanf("%d", &tc);
    int n[tc];
    for (int i = 0; i < tc; i++)
    {
        scanf("%d", &n[i]);
        int a[n[i]];
        for (int j = 0; j < n[i]; j++)
        {
            scanf("%d", &a[j]);
        }
        printf("Case #%d:", i+1);
        for (int j = n[i]-1; j >= 0; j--)
        {
            printf(" %d", a[j]);
        }
        printf("\n");
    }
    
    return 0;
}