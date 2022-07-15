#include<stdio.h>

int main()
{
    int d, s, t;
    char d1[] = {"Daging"};
    char s1[] = {"Sayur"};
    char t1[] = {"Telur"};
    scanf("%d %d %d", &d, &s, &t);
    if (d < s && s > t)
    {
        if (d < t)
        {
            printf("%s\n%s\n%s\n", s1, t1, d1);
        }
        else
        {
            printf("%s\n%s\n%s\n", s1, d1, t1);
        }
        
    }
    else if(d < t && t > s)
    {
        if (d < s)
        {
            printf("%s\n%s\n%s\n", t1, s1, d1);
        }
        else
        {
            printf("%s\n%s\n%s\n", t1, d1, s1);
        }
        
    }
    else if(d > s && d > t)
    {
        if (s < t)
        {
            printf("%s\n%s\n%s\n", d1, t1, s1);
        }
        else
        {
            printf("%s\n%s\n%s\n", d1, s1, t1);
        }
    }
    
    return 0;
}