#include <stdio.h>

int main()
{
    double a[3],b[3],c[3],d[3],baris[3];
    int i=0;
    for (i = 0; i < 3; i++)
    {
        baris[i]=0;
        scanf("%lf %lf %lf %lf", &a[i], &b[i], &c[i], &d[i]);
        baris[i] = (2*a[i])+(2*b[i])+(2*c[i])+(d[i]);
    }
    for (int j = 0; j < i; j++)
    {
        printf("%.2lf\n", baris[j]);
    }
    return 0;
}