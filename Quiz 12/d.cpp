#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MxN 20
#define ll long long
#define ld long double

typedef struct Jojo{
    char id[MxN];
    char name[MxN];
    ll harga;
}Jojo;

int main()
{
    int tc;
    scanf("%d", &tc);
    getchar();
    Jojo arr[tc];

    for (int i = 0; i < tc; i++)
    {
        char id[MxN];
        char name[MxN];
        ll harga;
        scanf("%[^\n]", id);
        getchar();
        scanf("%[^\n]", name);
        getchar();
        scanf("%lld", &harga);
        getchar();
        strcpy(arr[i].id, id);
        strcpy(arr[i].name, name);
        arr[i].harga = harga;
    }
    int mid = (tc-1)/2;
    ld med;
    if (tc % 2 == 0)
    {
        med = (arr[mid].harga + arr[mid+1].harga)/2;
    }else{
        med = arr[mid].harga;
    }
    for (int i = 0; i < tc; i++)
    {
        if (arr[i].harga >= med)
        {
            printf("%s %s\n", arr[i].id, arr[i].name);
        }
    }
    return 0;
}