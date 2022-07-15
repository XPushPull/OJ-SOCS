#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
    //PushPull
#define MxN 101
#define ll long long
#define ld long double

int binarySearch(long long int arr[], int l,int r,long long int x) 
{ 
    int mid;
    if (r>=l) { mid=l+(r-l)/2; 
        if (arr[mid]==x) return mid; 
        if (arr[mid]>x) return binarySearch(arr,l,mid-1,x); 
        return binarySearch(arr,mid+1,r,x); 
    } 
    return l;
}

int main(){
 ll int a,b,total=0,c=0;
 scanf("%lld",&a);
 ll int *simple=(ll int*)malloc(100*100*100*100*sizeof(ll int));
    for(ll int i = 1; i<=1500000 ; i++)
 	{
        simple[i]= (i* (i + 1)*(2 * i + 1))/6;
    }
 for(long long int i=0;i<a;i++)
 {
  scanf("%lld",&b);
  printf("Case #%lld: ",i+1);
  long long temp=binarySearch(simple,1,1500000,b);
  printf("%lld\n",temp);
 }
 return 0;
}
