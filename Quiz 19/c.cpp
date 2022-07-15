#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 255
#define ll long long
#define ld long double

int removeDuplicates(int arr[], int n){
    if (n==0 || n==1)
        return n;
 
    int temp[n];
    int j = 0;
    for (int i=0; i<n-1; i++)
        if (arr[i] != arr[i+1])
            temp[j++] = arr[i];
    temp[j++] = arr[n-1];

    for (int i=0; i<j; i++)
        arr[i] = temp[i];
 
    return j;
}

void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for(int i=0;i<n1;i++){
        L[i] = arr[left+i];
    }
    for(int i=0;i<n2;i++){
        R[i] = arr[mid+i+1];
    }

    int i=0;
    int j=0;
    int k=left;

    while(i<n1&&j<n2){
        if(L[i] <= R[j]){
        arr[k] = L[i];
        i++;
        }
        else{
        arr[k] = R[j];
        j++;
        }
        k++;
    }

    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }

    return;
}

void mergeSort(int arr[], int left, int right){
    if(left < right){
        int mid = left + (right-left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}
 
int main(){
  int a; scanf("%d", &a);
    int arr[a];
      for (int j = 0; j < a; j++){
            scanf("%d", &arr[j]);
        }
        mergeSort(arr, 0, a-1);
        a = removeDuplicates(arr, a);
      printf("%d\n",a);
}