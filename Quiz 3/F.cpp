#include <stdio.h>
int main ()
{
    long x,y,t=0;
    scanf("%ld %ld", &x, &y);
    for (int i = x;i <= y; i++)
    {
        t += x;
        x++;
    }
    printf("%ld\n", t);
    return 0;
}