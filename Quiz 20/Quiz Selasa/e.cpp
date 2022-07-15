#include <stdio.h>
#include <string.h>

int main(){
    int tc;
    scanf("%d",&tc);    
    for (int i = 0; i < tc; i++)
    {
        int x[9];
        scanf("%d ",&x[9][9]);
        for (int j = 0; j < i; j++)
        {
            int y[9];
            scanf("%d ",&x[9][9]);
        }
        
        scanf("%d ",&x[9][9]);
        printf("%d ", x[9][9]);
    }
    return 0;
}