#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 1001
#define ll long long
#define ld long double

char inputString[MxN][MxN];
int n, m;

void merge(char arr[], int left, int mid, int right) {
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

void mergeSort(char arr[], ll left, ll right) {
  if (left >= right) return;
  int mid = left + (right-left)/2;
  mergeSort(arr,left,mid);
  mergeSort(arr,mid+1,right);
  merge(arr,left,mid,right);
}

void bubbleSort(int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n - i; j++){
            if(strcmp(inputString[j], inputString[j+1]) < 0){
                char temp[1][m];
                strcpy(temp[0], inputString[j]);
                strcpy(inputString[j], inputString[j+1]);
                strcpy(inputString[j+1], temp[0]);
            }
        }
    }
    
}

int main()
{
    scanf("%d %d", &n, &m);
    char str[m];
    for (int i = 0; i < n; i++){
        scanf("%s", str);
        mergeSort(str, 0, m-1);
        strcpy(inputString[i], str);
    }
    bubbleSort(n);
    for (int i = 0; i < n; i++){
        printf("%s\n", inputString[i]);
    }
    
    return 0;
}