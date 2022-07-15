#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define Max 11
#define MxN 1001
#define ll long long
#define ld long double

struct dat{
    char name[Max];
    int score;
};

struct dat student[MxN];

void merge(struct dat arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    struct dat L[n1], R[n2];
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
        if(L[i].score > R[j].score){
            arr[k] = L[i];
            i++;
        }
        else if(L[i].score == R[j].score){
            if(strcmp(L[i].name, R[j].name) < 0){
                arr[k] = L[i];
                i++;
            }
            else{
                arr[k] = R[j];
                j++;
            }
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

void mergeSort(struct dat arr[], int left, int right){
    if(left < right){
        int mid = left + (right-left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int main(){
    int tc; scanf("%d", &tc); getchar();
    for (int i = 0; i < tc; i++){
        int n; scanf("%d", &n); getchar();
        for (int j = 0; j < n; j++){
            scanf("%[^#]#%d", student[j].name, &student[j].score); getchar();
        }
        mergeSort(student, 0, n-1);
        char search[Max]; scanf("%[^\n]", search); getchar();
        for (int j = 0; j < n; j++){
            if (strcmp(student[j].name, search) == 0){
                printf("Case #%d: %d\n", i+1, j+1);
                break;
            }
        }  
    }
}