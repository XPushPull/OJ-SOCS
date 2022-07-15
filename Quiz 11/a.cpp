#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MxN 255

int main(){
    int tc;
    scanf("%d",&tc);
    for (int i = 0; i < tc; i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if (((a+b) > c) == ((a+c) > b) == ((b+c) > a))
        {
            printf("Case #%d: Yes\n", i+1);
        }else{
            printf("Case #%d: No\n", i+1);
        }        
    }
    return 0;
}