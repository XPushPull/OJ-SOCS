#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MxN 255
#define ll long long
#define ld long double

int notfibs(int x,int y,int z)
{
	int sum;
	for(int i=0;i<z;i++)
	{
		sum=x+y;
		x=y;
		y=sum;
	}
	return x;
}

int main()
{
	int zero,one;
	scanf("%d %d",&zero,&one);
	int want;
	scanf("%d",&want);
	printf("%d\n",notfibs(zero,one,want));
}
