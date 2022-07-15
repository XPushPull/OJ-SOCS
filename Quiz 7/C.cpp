#include <stdio.h>

int main()
{
    int n, n1; 
    scanf("%d %d", &n, &n1);
    int length = n1;
    int start = n1;
    for (int i = 0; i < n; i++) //kotak model 1 - normal
    {
        for (int j = 0; j < n; j++){
            printf("#");
        }
        printf("\n");
    }

    printf("\n");
    for (int i = 0; i < n; i++) //kotak model bolong baris loncat
    {
        for (int j = 0; j < n; j++){  
            if (i == n1-1){
                printf("#");
                if (j == n-1){
                    n1 += start;
                }
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }
    
    printf("\n");
    for (int i = 0; i < n; i++) //kotak model bolong kolom loncat
    {
        for (int j = 0; j < n; j++){
            if (j == length-1){
                printf("#");
                length += start;
            }
            else{
                printf(".");
            }
        }
        length = start;
        printf("\n");
    }
    
    return 0;
}