#include<stdio.h>
int main(){
   char str[5][11];
   for (int i = 0; i < 5; i++)
   {
       scanf("%s", str[i]);
   }
   for (int i = 0; i < 5; i++)
   {
       printf("%10s|%s\n", str[i], str[i]);
   }
   return 0;
}