#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int item[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &item[i]);
    }
    int x;
    scanf("%d", &x);
    int kolom[x], ganti[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d %d", &kolom[i], &ganti[i]);
        item[kolom[i]-1]=ganti[i];
        printf("Case #%d:", i+1);
        for (int j = 0; j < n; j++)
        {
            printf(" %d", item[j]);
        }
        printf("\n");
    }

    return 0;
}
