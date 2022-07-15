#include <stdio.h>
 
int total(int x, int y)
{
    int s = 0;
    int kali = 1;
    int carry;
    while (x || y){
        carry = (x % 10) + (y % 10);
        carry %= 10;
        s = (carry * kali) + s;
        x /= 10;
        y /= 10;
        kali *= 10;
    }
    return s;
}
int main()

{
    int x,y,tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++){
        scanf("%d %d",&x,&y);
        printf("Case #%d: ", i+1);
        printf("%d", total(x,y));
        printf("\n");
    }
    return 0;
}