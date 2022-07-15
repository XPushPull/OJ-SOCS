#include <stdio.h>

int main()
{
    int tc; 
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int jam, menit;
        char index[3];
        scanf("%d:%d %s", &jam, &menit, index);
        if (jam == 12 && strcmp(index, "am") == 0) jam -= 12;
        else if (jam < 12 && strcmp(index, "pm") == 0) jam += 12;
        printf("Case #%d: %.2d:%.2d\n", i+1, jam, menit);
    }
    return 0;
}