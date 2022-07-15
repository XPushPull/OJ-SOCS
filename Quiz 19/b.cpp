#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 1001
#define ll long long
#define ld long double

struct siswa{
    char id[11];
    char name[21];
};

siswa Student[MxN];
void merge(struct siswa arr[], int left, int mid, int right){
    
    int n1 = mid - left + 1;
    int n2 = right - mid;
    struct siswa L[n1], R[n2];
 
    for(int i=0; i<n1; i++){
        L[i] = arr[left + i];
    }

    for(int i=0; i<n2; i++){
        R[i] = arr[mid + i + 1];
    }
  
    int indexLeftArray = 0;
    int indexRightArray = 0;
    int indexMergeArray = left;

    while(indexLeftArray < n1 && indexRightArray < n2){
        if(strcmp(L[indexLeftArray].id, R[indexRightArray].id) < 0){
        arr[indexMergeArray] = L[indexLeftArray];
        indexLeftArray++;
        }
        else{
        arr[indexMergeArray] = R[indexRightArray];
        indexRightArray++;
        }
        indexMergeArray++;
    }

    while(indexLeftArray < n1){
        arr[indexMergeArray] = L[indexLeftArray];
        indexLeftArray++;
        indexMergeArray++;
    }

    while(indexRightArray < n2){
        arr[indexMergeArray] = R[indexRightArray];
        indexRightArray++;
        indexMergeArray++;
    }
}

void mergeSort(struct siswa arr[],int left,int right){
    if(left < right){
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}
int main(){
  FILE * fp = fopen ("testdata.in", "r");
    int tc; fscanf(fp, "%d", &tc);
    for(int i=0; i<tc; i++){
        fscanf(fp, "%s %[^\n]", Student[i].id, Student[i].name);
    }
    for(int i=0; i<tc; i++){   
		mergeSort(Student, 0 , tc-1);
    printf("%s %s\n", Student[i].id, Student[i].name);
  }
fclose(fp);
}