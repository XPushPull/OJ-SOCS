#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 1000001
#define ll long long
#define ld long double

ll n;
ll m;
ll totalFix = 0;
ll arr[MxN];

// void merge(int arr[], int left, int mid, int right){
//     int n1 = mid - left + 1;
//     int n2 = right - mid;
//     int L[n1], R[n2];
//     for(int i=0;i<n1;i++){
//         L[i] = arr[left+i];
//     }
//     for(int i=0;i<n2;i++){
//         R[i] = arr[mid+i+1];
//     }

//     int i=0;
//     int j=0;
//     int k=left;

//     while(i<n1&&j<n2){
//         if(L[i] <= R[j]){
//         arr[k] = L[i];
//         i++;
//         }
//         else{
//         arr[k] = R[j];
//         j++;
//         }
//         k++;
//     }

//     while(i<n1){
//         arr[k] = L[i];
//         i++;
//         k++;
//     }
//     while(j<n2){
//         arr[k] = R[j];
//         j++;
//         k++;
//     }

//     return;
// }

// void mergeSort(int arr[], int left, int right){
//     if(left < right){
//         int mid = left + (right-left) / 2;
//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid+1, right);
//         merge(arr, left, mid, right);
//     }
// }

int f(ll x, ll k){
    ll total = 0;
    while (k > 0){
        total += arr[x++] * k--;
    }
    if (total <= m && totalFix <= total) totalFix = total;
		else return total;
}

int main(){
  scanf("%lld", &n);
  for (ll i = 0; i < n; i++){
      scanf("%lld", &arr[i]);
  }
    //mergeSort(arr,0,n-1);
  scanf("%lld", &m);
  for (ll x = 1; x <= n; x++){
    for (ll k = n - (x - 1); k > 0; k--){
        f(x, k);
      }
    }
    printf("%lld\n", totalFix);
return 0;
}