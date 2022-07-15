#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 101
#define ll long long
#define ld long double

void sort(int *a,int *b,char namea[MxN], char nameb[MxN])
{
	int temp=*a;
	*a=*b;
	*b=temp;
	
	char tempname[51];
	strcpy(tempname,namea);
	strcpy(namea,nameb);
	strcpy(nameb,tempname);
}

void specialconditionsort(int arr[], char name[][51], int x)
{
	for (int i = 0; i < x-1; i++)
	{
		for (int j = 0; j < x-i-1; j++)
		{
			if (arr[j] > arr[j+1]) 
			{
				sort(&arr[j], &arr[j+1], name[j], name[j+1]); 
			}
            else if(arr[j] == arr[j+1])
            {
                if(strcmp(name[j],name[j+1]) > 0)
				{
                    sort(&arr[j], &arr[j+1], name[j], name[j+1]);
                }
            }
		}   
	}      
}

int main(){
	int t; scanf("%d",&t);
	for(int i=0;i<t;i++){
		int tc; scanf("%d",&tc); getchar();
		int num[tc];
        char name[tc][51];
        for(int j=0;j<tc;j++){
        	scanf("%[^#]#%d",name[j],&num[j]);
        	getchar();
		}
		specialconditionsort(num,name,tc);
		printf("Case #%d:\n",i+1);
		for(int k=0;k<tc;k++){
            printf("%s - %d\n",name[k],num[k]);
        }
	}
	return 0;
}

/*
2
3
andi#30
rudi setiawan#50
aben#30
5
andi#70
rudi setiawan#50
aben#70
rony sinardi#50
kurniati#40
*/