#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, k;
    scanf("%d %d", &n, &k);
    int l = k;
    int start = k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {  
            if (i == k-1)
            {
                printf("#");
                if (j == n-1)
                {
                    k += start;
                }
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
    
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == l-1)
            {
                printf("#");
                l += start;
            }
            else
            {
                printf(".");
            }
        }
        l = start;
        printf("\n");
    }
    
    return 0;
}