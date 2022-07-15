#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MxN 255
#define ll long long
#define ld long double

typedef struct Scheduler{
    char code[50];
    char day[50];
    int time;
}scheduler;

int main()
{
    int tc;
    scanf("%d", &tc);
    
    scheduler arr[tc+1];
    for (int i = 1; i <= tc; i++)
    {   
        char code[50];
        char day[50];
        int time;
        scanf("%s", code);
        scanf("%s", day);
        scanf("%d", &time);
        strcpy(arr[i].code, code);
        strcpy(arr[i].day, day);
        arr[i].time = time;
    }
    int queue;
    scanf("%d", &queue);
    for (int i = 0; i < queue; i++)
    {
        int idx;
        scanf("%d", &idx);
        printf("Query #%d:\n", i+1);
        printf("Code: %s\n", arr[idx].code);
        printf("Day: %s\n", arr[idx].day);
        if (arr[idx].time >= 10)
        {
            printf("Time: %d:00\n", arr[idx].time);
        } else {
        printf("Time: 0%d:00\n", arr[idx].time);
        }
    }
    return 0;
}