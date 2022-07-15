#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int n,m;
     scanf("%d %d\n",&n, &m);
    char s[1001];
     scanf("%[^\n]",s); 
     getchar();
    for (int i = 0; i < m; i++)
    {
        int input;
        scanf("%d",&input);
        getchar();
        if (s[input] >= 'A' && s[input] <= 'Z')
        {
            s[input] += 32;
        } else {
            s[input] -= 32;
        }           
    }
    printf("%s\n",s);
    return 0;
}