#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    char a[n];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &n);
        getchar();
        for (int j = 0; j < n; j++)
        {
            scanf("%c", &a[j]);
        }
        
        printf("%c%c\n", a[n-1], a[0]);
    }
    
    return 0;
}