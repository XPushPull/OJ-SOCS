#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int c[n];
	for(int i=0;i<n;i++)
	{
		int x=1;
		scanf("%d",&c[i]);
		printf("Case #%d:\n",i+1);
		for (int a=0;a<c[i];a++)
		{
			for(int j=0;j<c[i]-x;j++)
			{
				printf(" ");
			}
			if(c[i]%2 ==0)
			{
                for(int b=0; b<x; b++)
				{
                    if(b%2 == 0)
					{
                        printf("#");
                    }
					else
					{
                        printf("*");
                    }
                }
            }
			else
			{    
                for(int d=1; d<=x; d++)
				{
                    if(d%2 == 0)
					{
                        printf("#");
                    }
					else
					{
                        printf("*");
                    }
                }
            }
            x++;
			printf("\n");
		}
	}
}