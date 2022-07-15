#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 101
#define ll long long
#define ld long double

char str[MxN][MxN];
void bubbleSort(int n);

int main(){
  int tc; scanf("%d", &tc);
  for (int i = 0; i < tc; i++){
    int n,k; scanf("%d %d", &n, &k);
		for (int j = 0; j < n; j++){
			scanf("%s", str[j]);
		}
		bubbleSort(n);
		printf("Case #%d: %s\n", i+1, str[k-1]);
  }
}

void bubbleSort(int n){
	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < n-1-i; j++){
			if(strcmp(str[j], str[j+1]) > 0){
				char buf[MxN];
				strcpy(buf, str[j]);
				strcpy(str[j], str[j+1]);
				strcpy(str[j+1], buf);
			}
		}
	}
}