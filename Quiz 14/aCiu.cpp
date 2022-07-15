#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void rev(char *string)
{
   if (!*string) 
    return;
   else{
       reverse(string+1);
       printf("%c", *string);
   }
}
 

int main(){
    int tc;
    scanf("%d", &tc); getchar();
    for (int i = 1; i <= tc; i++)
    {
    char string[1010] = "";
    scanf("%[^\n]", string); getchar();
    printf("Case #%d: ", i);
    reverse(string);
    printf("\n");
    }
    
    return 0;
}