#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 101
#define ll long long
#define ld long double

struct City{
    char city[1500];
    double temp;
    char type;
    double tmp;
};

City city[MxN];
int x;

void merge(struct City list[], int l, int m, int r){
  int i, j, k;
  int n1 = m - l + 1;
  int n2 = r - m;
  struct City L[n1], R[n2];
   
  for (i = 0; i < n1; i++) L[i] =list[l + i];
	for (j = 0; j < n2; j++) R[j] =list[m + 1 + j];
	
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i].tmp < R[j].tmp){
            list[k] = L[i];
            i++;
        }
        else {
            list[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        list[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        list[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(struct City list[], int l, int r){
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(list, l, m);
        mergeSort(list, m + 1, r);
        merge(list, l, m, r);
    }
}
  
void print(City list[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%s is %.2lf%c\n",list[i].city,list[i].temp,list[i].type);
}

int main(){
  FILE *fp = fopen("testdata.in","r");
    int i = 0;
    while (fscanf(fp, "%[^#]#%lf#%c\n" , city[i].city ,&city[i].temp, &city[i].type) != EOF){
        city[i].tmp = city[i].temp;
        if(city[i].type == 'F') city[i].tmp = ( city[i].tmp - 32 ) * 5/9;
        i++; x++;
    }
  mergeSort(city,0,x-1);
  print(city,x);
}