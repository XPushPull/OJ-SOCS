#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tc;
    scanf("%d", &tc);
    int n[tc];
    int count = 0;
    for (int i = 0; i < tc; i++)
    {
        scanf("%d", &n[i]);
        int minilai[n[i]];
        int kkm[n[i]];
        for (int j = 0; j < n[i]; j++)
        {
            scanf("%d", &minilai[j]);
        }
        for (int j = 0; j < n[i]; j++)
        {
            scanf("%d", &kkm[j]);
        }
        for (int j = 0; j < n[i]; j++)
        {
            if (minilai[j] < kkm[j])
            {
                count++;
            }
            
        }
        printf("Case #%d: %d\n", i+1, count);
        count = 0;
    }
    
    return 0;
}