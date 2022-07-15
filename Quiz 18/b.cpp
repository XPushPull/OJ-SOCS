#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 101
#define ll long long
#define ld long double

int main(){
  int n;
    ll num[1001] , ntemp;
    char arr[1001][50],temp[50];
    
    FILE *fp = fopen("testdata.in","r");
    fscanf(fp,"%d\n",&n);
    for (int i=0;i<n;i++){
        fscanf(fp,"%lld#%[^\n]",&num[i],arr[i]);
    }
    fclose(fp);
    for (int j = 1; j < n; j++) {
    for (int i = 1; i < n; i++) {
        if (strcmp(arr[i - 1], arr[i]) > 0) {
            strcpy(temp, arr[i - 1]);
            ntemp = num[i-1];
            strcpy(arr[i - 1], arr[i]);
            num[i-1]=num[i];
            strcpy(arr[i], temp);
            num[i]=ntemp;
        }
    	}
    } 
    for (int i=0;i<n;i++) printf("%lld %s\n", num[i], arr[i]); 
}