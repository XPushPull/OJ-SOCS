#include <stdio.h>

int main()
{
    int n, t=0;
    scanf("%d", &n);
    int views[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &views[i]);
    }
    int f;
    scanf("%d", &f);
    int x[f], y[f];
    for (int i = 0; i < f; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
        for (int j = x[i]; j <= y[i]; j++)
        {
            t += views[j-1];
        }
        printf("Case #%d: %d\n", i+1, t);
        t=0;
    }
    return 0;
}