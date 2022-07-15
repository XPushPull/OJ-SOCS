#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 101
#define ll long long
#define ld long double

int pow(int a, int b){
	int res=1;
		for(int i=1;i<=b;i++){
			res= res * a;
		}
	return res;
}

int main(){
    int input ;scanf("%d",&input);
    int n2 = pow(2, input)-1;
    int size = n2;
    int nspace = 0, store = 0;
    for(int i = 0; i < input; i++){
        int total = size;
        for (int j = 0; j < n2; j++){
          if(total && !nspace){
                printf("*");
                total--;
                nspace = store;
          }else{
                printf(" ");
                nspace--;
          }
            if (!total) break;
        }
        nspace = store;
        size /= 2;
        if (!nspace) nspace = 1;
        else nspace = (nspace * 2) + 1;
        store = nspace;
        printf("\n");
  }
}