#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
//PushPull
#define MxN 101
#define ll long long
#define ld long double

int min(int x, int y){
    if(x < y) return x;
    else return y;
}

int main(){
  int tc; scanf("%d", &tc);
    for(int i = 0; i < tc; i++){
      int n; scanf("%d", &n);
        int arr[n];
        int diff = INT_MAX;
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[j]);    
        for (int j = 0; j < n; j++){
          for (int k = j + 1; k < n; k++){
            int pinch = arr[j] - arr[k];
              if (pinch < 0) pinch *= -1;
               diff = min(diff, pinch);
            }
      }
    printf("Case #%d: %d\n", i+1, diff); 
  }
}