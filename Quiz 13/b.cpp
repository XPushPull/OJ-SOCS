#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MxN 255
#define ll long long
#define ld long double

ll count=0;

int Fib(int n)
{
  count++;
  if (n <= 1)
    return n;
  else
    return Fib(n-1) + Fib(n-2);
}

int main ()
{
  int tc=0;
  scanf("%d",&tc);
  for (int i = 0; i < tc; i++)
  {
      count = 0;
      int n;
      scanf("%d",&n);
      Fib(n);
      printf("Case #%d: %lld\n", i+1 ,count);
  }
}