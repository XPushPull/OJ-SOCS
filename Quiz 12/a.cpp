#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MxN 255
#define ll long long
#define ld long double

int main(){
    int tc; 
    scanf("%d",&tc);
    for (int i = 0; i < tc; i++)
    {
        int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
        int disc = 0;
            disc = a * b / 100;
        if (disc<c){
            printf("Case #%d: %d\n",i+1,disc);}
        else {
            printf("Case #%d: %d\n",i+1, c);
        }
    }
    return 0;
}