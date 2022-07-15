#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//PushPull
#define MxN 1001
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

void mergeSort(ll arr[], ll left, ll right) {
  if (left >= right) return;
  int mid = left + (right-left)/2;
  mergeSort(arr,left,mid);
  mergeSort(arr,mid+1,right);
  merge(arr,left,mid,right);
}

int main(){
  ll tc; scanf("%lld", &tc);
    for (int t = 0; t < tc; t++){
      ll n; scanf("%lld", &n);
      ll arr[n];
			for (int i = 0; i < n; i++){
				scanf("%lld",&arr[i]);
			}
			mergeSort(arr,0,n-1);
			// for (int i = 0; i < n; i++){
			// 	printf("%lld ",arr[i]);
			// }
			ll res=0;
    	for(int i=1;i<n/2;i++){
        if(res<arr[i]-arr[i-1]) res=arr[i]-arr[i-1];
    	}
    	for(int i=(n/2)+1;i<n;i++){
        if(res<arr[i]-arr[i-1]) res=arr[i]-arr[i-1];
    	}
    	printf("Case #%d: %lld\n",t+1,res);
	}      
}



 