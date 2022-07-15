#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    //PushPull
#define MxN 1000001
#define ll long long
#define ld long double

int main()
{
  int tc;scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
      char integer[MxN];scanf("%s", &integer);
      int len = strlen(integer);
      ll n[len], total = 0;
       for (int j = 0; j < len; j++)
        {
          n[j] = integer[j] - '0'; 
            if (j == 0)
            {
                total = n[j];
            }
            else
            {
                total *= 10;
                total += n[j];
                total %= 11;
            }
        }
        if (total == 0) printf("Case #%d: Yeah\n", i+1);
        else printf("Case #%d: Nah\n", i+1); 
  }
}