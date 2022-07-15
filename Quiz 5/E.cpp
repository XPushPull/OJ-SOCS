#include <stdio.h>

int main()
{
    int tc, mF=0, countspace=0, num;
    // maxfreq = frequency terbesar 
    // countspace = spasi 2 / 3
    scanf("%d", &tc);
    int n[tc];
    for (int i = 0; i < tc; i++)
    {
        scanf("%d", &n[i]);
        int arr[200001] = {0};
        for (int j = 0; j < n[i]; j++)
        {
            scanf("%d", &num);
            arr[num]++;
        }
        for (int i = 0; i < 200001; i++)
        {
            if (mF < arr[i])
            {
                mF = arr[i];
            }
            
        }
        printf("Case #%d: %d\n", i+1, mF);
        for (int i = 0; i < 200001; i++)
        {
            if (arr[i] == mF)
            {
                countspace++;
            }
            
        }
        for (int i = 0; i < 200001; i++)
        {
            if (arr[i] == mF)
            {
                printf("%d", i);
                if (countspace-1!=0)
                {
                    printf(" ");
                    countspace--;
                }
            }
            
        }
        printf("\n");    
        mF=0;
        countspace=0;
    }
    
    return 0;
}