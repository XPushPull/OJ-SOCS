#include <stdio.h>
int main(){
    int X,Y,Z;
    scanf("%d %d",&X,&Y);
    int grdn[X][Y];
    for (int i=0; i < X; i++)
    {
        for (int j=0; j < Y;j++)
        {
            scanf("%d", &grdn[i][j]);
        }
    }
    scanf("%d", &Z);
    int X1[Z], Y1[Z], change[Z];
    for (int i=0; i < Z; i++)
    {
        scanf("%d %d %d", &X1[i], &Y1[i], &change[i]);
        grdn[X1[i]-1][Y1[i]-1] = change[i];
    }
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            if (j==Y-1)
            {
                printf("%d",grdn[i][j]);
                break;
            }
            printf("%d ", grdn[i][j]);
        }
        printf("\n");
    }
return 0;
}