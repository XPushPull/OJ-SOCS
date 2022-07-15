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












#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tc;
    long total=0;
    scanf("%d", &tc);
    long n[tc];
    for (int i = 0; i < tc; i++)
    {
        scanf("%ld", &n[i]);
        long num[n[i]];
        for (int j = 0; j < n[i]; j++)
        {
            scanf("%ld", &num[j]);
            total += num[j];
        }
        printf("Case #%d: %ld\n", i+1, total);
        total=0;
        
    }
    
    return 0;
}
