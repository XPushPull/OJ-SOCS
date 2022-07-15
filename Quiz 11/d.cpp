#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getFactor(int n){
    int count=0;
    for (int i = 1; i*i <= n; i++)
    {
       if (n%i==0)
       {
           if (i*i==n)
           {
               count += 1;    
           }else{
           count += 2;
           }
       }
    }
    return count;
}

int main(){
    int tc;
    scanf("%d", &tc);
   for (int i = 0; i < tc; i++)
   {
      int n;
      scanf("%d", &n);
      printf("Case #%d: %d\n", i+1, getFactor(n));
   }
    return 0;
}
