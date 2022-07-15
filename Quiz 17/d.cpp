#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
    //PushPull
#define MxN 101
#define ll long long
#define ld long double

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] < arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 

int main(){
  int total, remove; scanf("%d %d", &total, &remove);
  int row[total];
  int minus[remove];
    for(int i=0; i<total; i++) scanf("%d", &row[i]);
    for(int i=0; i<remove; i++) scanf("%d", &minus[i]);
      bubbleSort(row, total);
      bool notFound = true, yes = false;
      int counter = 0;
      while(notFound && counter < total){
        bool x = true;
          for(int i=0; i<remove; i++){
            if(row[counter] == minus[i]) {
                    x = false;
                    break;
                }
            }
            if(counter == total-1 && x){
                notFound = false;
                yes = true;
            }else if(x){
                notFound = false;
                yes = true;
            }else{
                counter++;
            }
        }
      if(yes) printf("Maximum number is %d\n", row[counter]);
  else printf("Maximum number is -1\n");
}
