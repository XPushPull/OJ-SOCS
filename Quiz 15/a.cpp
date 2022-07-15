#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
    //PushPull
#define MxN 101
#define ll long long
#define ld long double

int main()
{
    int tc; scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int hour, minute;
        char aa[3];
        scanf("%d:%d %s", &hour, &minute, aa);
        if (hour == 12 && strcmp(aa, "am") == 0)
        {
            hour -= 12;
        }
        else if (hour < 12 && strcmp(aa, "pm") == 0)
        {
            hour += 12;
        }
        printf("Case #%d: %.2d:%.2d\n", i+1, hour, minute);
        
    }
}