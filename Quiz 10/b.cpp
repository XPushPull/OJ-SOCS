#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int t; 
  scanf("%d",&t); 
  getchar();
  for (int i = 0; i < t; i++) {
    int n, pos; 
    scanf("%d %d",&n,&pos);
    if (n & (1 << pos)) {
      printf("1\n");
    }
    else printf("0\n");
  }
  return 0;
}