#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 101
#define ll long long
#define ld long double

int binarySearch(int arr[],int left,int right,int found);
void merge(int arr[], int left, int mid, int right);
void mergeSort(int arr[], int left, int right);

int main(){
  int tc; scanf("%d", &tc);
  for (int i = 0; i < tc; i++){
    int n; scanf("%d", &n);
		int rr[n];   
		for (int j = 0; j < n; j++){
			scanf("%d", &rr[j]);
		}
		mergeSort(rr, 0 , n-1);
		int find; scanf("%d", &find);
		int index = binarySearch(rr, 0 , n-1, find);
		if (index != -1 && index == n-1){
			printf("CASE #%d: %d %d\n", i+1, rr[index-1], rr[index]);
    }else if(index != -1 && index != n-1){ 
			printf("CASE #%d: %d %d\n", i+1, rr[index], rr[index+1]);
    }else{ 
			printf("CASE #%d: %d %d\n", i+1, index, index);
		}
  }
}

int binarySearch(int arr[],int left,int right,int found){
  if(right>=left){
    int mid=left+(right-left)/2;
    if(arr[mid]==found) return mid;
    else if(arr[mid]>found) return binarySearch(arr,left,mid-1,found);
    else if(arr[mid]<found) return binarySearch(arr,mid+1,right,found);
  }
  return -1;
}

void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];
    for(int i=0;i<n1;i++) L[i] = arr[left+i];
    for(int i=0;i<n2;i++) R[i] = arr[mid+i+1];

    int i=0;
    int j=0;
    int k=left;

    while(i<n1&&j<n2){
        if(L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    while(i<n1) arr[k++] = L[i++];
    while(j<n2) arr[k++] = R[j++];

}

void mergeSort(int arr[], int left, int right){
    if(left < right){
        int mid = left + (right-left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}