#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MxN 255
 
// Function to remove duplicate elements
// This function returns new size of modified
// array.
int removeDuplicates(char arr[], int n)
{
    // Return, if array is empty
    // or contains a single element
    if (n==0 || n==1)
        return n;
 
    int temp[n];
 
    // Start traversing elements
    int j = 0;
    for (int i=0; i<n-1; i++)
 
        // If current element is not equal
        // to next element then store that
        // current element
        if (arr[i] != arr[i+1])
            temp[j++] = arr[i];
 
    // Store the last element as whether
    // it is unique or repeated, it hasn't
    // stored previously
    temp[j++] = arr[n-1];
 
    // Modify original array
    for (int i=0; i<j; i++)
        arr[i] = temp[i];
 
    return j;
}

void merge(char arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // temporary array
    char L[n1], R[n2];

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

void mergeSort(char arr[], int left, int right){
    if(left < right){
        int mid = left + (right-left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}
 
// Driver code
int main()
{
    int tc;
    scanf("%d", &tc);
    getchar();
    for (int i = 0; i < tc; i++)
    {
        char arr[100000];
        scanf("%s", &arr);
        int len = strlen(arr);
        mergeSort(arr, 0, len-1);
        int n = removeDuplicates(arr, len);
        if (n%2 == 0)
        {
            printf("Case #%d: Breakable\n", i+1);  
        }
        else
        {
            printf("Case #%d: Unbreakable\n", i+1); 
        }
    }
 
    return 0;
}