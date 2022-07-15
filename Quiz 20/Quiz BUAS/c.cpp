#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define ID 21
#define NmE 101
#define ll long long
#define ld long double

int main(){
  int tc;scanf("%d", &tc); getchar();
  char aidi[tc][ID];
  char nama[tc][NmE];
  int umur[tc];
  for(int i=0; i<tc; i++){
    scanf("%s", aidi[i]); getchar();
    scanf("%[^\n]", nama[i]); getchar();
    scanf("%d", &umur[i]); getchar();
  }
  int query; scanf("%d", &query); getchar();
  int x[query];
  for(int i=0; i<query; i++){
    scanf("%d", &x[i]); getchar();
  }
	//For Printing
  for(int i=0; i<query; i++){
    printf("Query #%d:\n", i+1);
    printf("ID: %s\n", aidi[x[i]-1]);
    printf("Name: %s\n", nama[x[i]-1]);
    printf("Age: %d\n", umur[x[i]-1]);    
  }
}