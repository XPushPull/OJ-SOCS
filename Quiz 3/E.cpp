#include <stdio.h>
int main ()
{
    double x,p,a,b,c;
    scanf("%lf %lf", &x, &p);
    a = x + (x *(p/100));
    b = a + (a *(p/100));
    c = b + (b *(p/100));
    printf("%.2lf\n", c);
    return 0;
}