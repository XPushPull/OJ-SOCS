#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 255
#define ll long long
#define ld long double

void merge(ll arr[], int left, int mid, int right) {
  int lenLeft = mid - left + 1;
  int lenRight = right - mid;
  ll arrLeft[lenLeft], arrRight[lenRight];
  for (int i = 0; i < lenLeft; i++) arrLeft[i] = arr[left+i];
  for (int i = 0; i < lenRight; i++) arrRight[i] = arr[mid+1+i];
  int i = 0, j = 0, k = left;
  while (i < lenLeft && j < lenRight) {
    if (arrLeft[i] <= arrRight[j]) arr[k] = arrLeft[i++];
    else arr[k] = arrRight[j++];
    k++;
  }
  while (i < lenLeft) arr[k++] = arrLeft[i++];
  while (j < lenRight) arr[k++] = arrRight[j++];
}

void mergeSort(ll arr[], int left, int right) {
  if (left >= right) return;
  int mid = left + (right-left)/2;
  mergeSort(arr,left,mid);
  mergeSort(arr,mid+1,right);
  merge(arr,left,mid,right);
}

int main() {
  ll N;scanf("%lld",&N);
	ll X[N]; ll Y; 
    for(int i = 0; i<N; i++) scanf("%lld",&X[i]);
      scanf("%lld",&Y);
        mergeSort(X, 0, N-1);
	      ll counter = 0;
    for(int i = 0; i<N; i++){
    if(Y >= X[i]){
		  Y = Y-X[i];
		  counter++;
	  }else{
		break;
	  }
  }printf("%lld\n", counter);
}