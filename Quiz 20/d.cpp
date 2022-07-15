#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
//PushPull
#define MxN 100001
#define ll long long
#define ld long double

int main(){
	char temp[MxN];
	int value[10001],pages=1,cons;
	FILE * fp = fopen ("testdata.in", "r");
	fscanf(fp,"%d\n",&cons);
	while(fscanf(fp,"%s\n",temp) != EOF){
		if(temp[0] == '#'){
				pages++;
				value[pages]--;
			}
			value[pages]++;
	}
	int ver=0;
		for(int x = 1; x < pages ; x++){
		if(value[x] < cons){
			printf("page %d: %d word(s)\n",x,value[x]);
			ver++;
		}
		else if(ver == 0 && x == pages - 1){
			printf("The essay is correct\n");
		}
	}
}
