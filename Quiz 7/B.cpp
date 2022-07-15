#include <stdio.h>                              
int main()
{
    int n;
    long total=0;
    scanf("%d", &n);
    long x[n];
    for (int i = 0; i < n; i++)
    {   
        scanf("%ld", &x[i]);
        long num[x[i]];
        for(int j = 0; j < x[i]; j++)
        {
                scanf("%ld", &num[j]);
                total += num[j];
        }
        printf("Case #%d: %ld\n",i+1,total);
        total=0;
    }
    return 0;
}



