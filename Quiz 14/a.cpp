#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 1001
#define ll long long
#define ld long double

void rev(char *kalimat)
{
   if (!*kalimat) return;
   else { rev(kalimat+1); printf("%c", *kalimat);
   }
}
 
int main(){
  int tc;
  char kalimat[MxN] = "";
  scanf("%d", &tc); getchar();
   for (int i = 0; i < tc; i++) {
      scanf("%[^\n]", kalimat); getchar();
      printf("Case #%d: ", i+1);
       rev(kalimat);
      printf("\n");
    }
}