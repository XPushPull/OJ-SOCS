#include <stdio.h>

int main(){
int tc;
scanf("%d",&tc);

for (int i=0;i<tc;i++){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int p,q;
    scanf("%d %d",&p,&q);
    printf("Case #%d : ",i+1);
    if (arr[p-1]>arr[q-1]){
        printf("Bibi\n");
    }
    else if (arr[p-1]<arr[q-1]){
        printf("Lili\n");
    }
    else printf("Draw\n");
}
    return 0;
}