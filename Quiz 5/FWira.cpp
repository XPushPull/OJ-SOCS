#include <stdio.h>

void merge(long long int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    // temporary array
    int L[n1], R[n2];

    // fill temporary array
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
        if(L[i] >= R[j]){
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

void mergeSort(long long int arr[], int left, int right){
    if(left < right){
        int mid = left + (right-left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int main(int argc, char const *argv[])
{
    long long int tc;
    scanf("%lld", &tc);
    long long int n[tc];
    for (int i = 0; i < tc; i++)
    {
        scanf("%lld", &n[i]);
        long long int angka[n[i]];
        for (int j = 0; j < n[i]; j++)
        {
            scanf("%lld", &angka[j]);
        }
        mergeSort(angka, 0, n[i]-1);
        printf("Case #%d: %lld\n", i+1, angka[0]+angka[1]);
    }

    return 0;
}