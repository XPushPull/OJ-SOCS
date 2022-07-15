#include <stdio.h>

int main() {
  char arr[101];
  scanf("%[^\n]", arr);
  printf("Happy Birthday to %s.\n", arr);
  return 0;
}