#include <stdio.h> //Simple Array
int main(int argc, char){
    int n;        //scan the number of array
    scanf("%d",&n);
    int sqns[n], num[n], print[n]; //declare the int variable for search seq, number input and print
    for (int i=0; i<n; i++) 
    {
        scanf("%d",&sqns[i]);
    }
    for (int j=0; j<n; j++)
    {
        scanf("%d",&num[j]);
        print[sqns[j]] = num[j];
    }
    for (int k=0; k<n; k++)
    {
        if (k==n-1)
        {
            printf("%d",print[k]);
            break;
        }
        printf("%d ",print[k]);
    }
    printf("\n");
    return 0;
}