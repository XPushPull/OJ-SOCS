#include<stdio.h>

int main()
{
    int j, l, b,aver,participant,totaltemp=0;
    char j1[] = {"Jojo"};
    char l1[] = {"Lili"};
    char b1[] = {"Bibi"};
    scanf("%d", &participant);
    int arr[participant];
    scanf("%d %d %d", &j, &l, &b);
    for (int i = 0; i < participant; i++)
    {
        scanf("%d", &arr[i]);
        totaltemp += arr[i];
    }
    aver = (j + l + b+ totaltemp) / (3 + participant);

    if (j < aver)
    {
        printf("%s tidak lolos\n", j1);
    }
    else
    {
        printf("%s lolos\n", j1);
    }
    
    if (l < aver)
    {
        printf("%s tidak lolos\n", l1);
    }
    else
    {
        printf("%s lolos\n", l1);
    }
    
    if (b < aver)
    {
        printf("%s tidak lolos\n", b1);
    }
    else
    {
        printf("%s lolos\n", b1);
    }

    return 0;
}
