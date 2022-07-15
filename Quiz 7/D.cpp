#include <stdio.h>
// int main()
// {

//     int i, j, n; 
//     scanf("%d", &n);  // 'n' must be odd
//     int a[n];
//     for(i = 0; i < n; i++)
//     {
//         for(j = 0; j < n; j++)
//         { 
//             // left diagonal, right diagonal, top horizontal, bottom horizontal, left vertical, right vertical
//             if(i == j || i + j == n - 1 || i == 0 || i == n - 1 || j == 0 || j == n - 1)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tc;
    scanf("%d", &tc);
    int n[tc];
    for (int i = 0; i < tc; i++)
    {
        scanf("%d", &n[i]);
        
    }

    for (int i = 0; i < tc; i++)
    {
        for (int y = 0; y < n[i]; y++)
        {
            for (int x = 0; x < n[i]; x++)
            {
                if (y==x || x==n[i]-1-y || y==0 || x==0 || y==n[i]-1 || x==n[i]-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }

            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}