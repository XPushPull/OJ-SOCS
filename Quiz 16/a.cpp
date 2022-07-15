#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 101
#define ll long long
#define ld long double

int min(int a , int b){
    if(a > b)return b;
    else return a;
}

int bsLow(int array[], int x, int low, int high) {
  int len = high + 1;
  int mid = high / 2;
  while (low <= high) {
    int mid_elem = array[mid];
    if (mid_elem < x) {
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }

    mid = low + (high - low) / 2;
  }
  if (low < len && array[low] == x) {
    return low;
  }
  return -1;
}
int bsHigh(int array[], int key, int low, int high) {
  int len = high + 1;
  int mid = high / 2;

  while (low <= high) {
    int mid_elem = array[mid];
    if (mid_elem <= key) {
      low = mid+1;
    }
    else {
      high = mid-1;
    }
    mid = low + (high-low)/2;
  }

  if(high == -1)
    return high;
  
  if (high < len && array[high] == key) {
    return high;
  }

  return -1;
}

int main(){
  int n , m; scanf("%d %d" , &n , &m);
    int arr1[n] , arr2[m];
    for(int i = 0 ; i < n ; i++) scanf("%d",&(arr1[i]));
    for(int i = 0 ; i < m ; i++) scanf("%d",&(arr2[i]));
    int len = sizeof(arr1) / sizeof(arr1[0]);
    for(int i = 0 ; i < m ; i++){
      int resHigh = bsHigh(arr1,arr2[i],0,n-1);
      int resLow = bsLow(arr1,arr2[i],0,n-1);
        if(resHigh != -1 && resLow != -1){
          printf("%d\n",min(resHigh,resLow)+1);
        }else if(resHigh != -1 && resLow == 1){
          printf("%d\n",resHigh+1);
        }else if(resHigh != -1 && resLow == 1){
          printf("%d\n",resLow+1);
        }else{ printf("%d\n" , -1);
    }
  }
  return 0;
}