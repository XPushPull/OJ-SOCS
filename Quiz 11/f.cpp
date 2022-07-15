#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    int n[tc];
    for (int i = 0; i < tc; i++)
    {
        scanf("%d", &n[i]);
        long arr[n[i]][n[i]], sumc, totalc[n[i]];
        for (int k = 0; k < n[i]; k++)
        {
            for (int l = 0; l < n[i]; l++)
            {
                scanf("%ld", &arr[k][l]);
            }
        }
        printf("Case #%d:", i+1);
        for(int k = 0; k < n[i]; k++)
        {
            sumc = 0;
            for(int l = 0; l < n[i]; l++)
            {
                sumc = sumc + arr[l][k];
            }
            totalc[k]=sumc;
            printf(" %ld", totalc[k]);
        }
        printf("\n");
    }    

    return 0;
} 