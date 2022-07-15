#include <stdio.h>

int main(int argc, char const *argv[])
{
    long long int tc, total=0,count=0;
    scanf("%lld", &tc);
    long long int n[tc];
    for (int i = 0; i < tc; i++)
    {
        scanf("%lld", &n[i]);
        long long int angka[n[i]];
        for (int j = 0; j < n[i]; j++)
        {
            scanf("%lld", &angka[j]);
            total += angka[j];
        }
        printf("Case #%d: %lld\n", i+1, total);
        for (int k = 0; k < n[i]; k++)
        {
            if (angka[k]>total)
            {
                count++;
            }
            
        }
        printf("%d\n", count);
        total=0;
        count=0;
    }
    
    return 0;
}
