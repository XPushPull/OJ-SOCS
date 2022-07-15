#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 101
#define ll long long
#define ld long double

int main(){
  int n; scanf("%d",&n);
    char arr[n][17] , temp[17];
    ll dl[n] , dltemp;
    for (int i = 0; i < n; i++)
    {
        scanf("%s %lld",arr[i],&dl[i]);
    }
    for (int j = 1; j < n; j++) {
        for (int i = 1; i < n; i++) {
            if (dl[i-1] > dl[i]) {
                dltemp=dl[i-1];
                dl[i-1]=dl[i];
                dl[i]=dltemp;
                                   
                strcpy(temp, arr[i - 1]);
                strcpy(arr[i - 1], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }
    for (int j = 1; j < n; j++) {
            for (int i = 1; i < n; i++) {
                if (dl[i-1] == dl[i] && strcmp(arr[i - 1], arr[i]) > 0){
                    strcpy(temp, arr[i - 1]);
                    strcpy(arr[i - 1], arr[i]);
                    strcpy(arr[i], temp);
                }
            }
        }
    
    for (int i=0;i<n;i++){
        printf("%s\n", arr[i]);
    }

return 0;
}