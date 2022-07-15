#include <stdio.h>

int main(){
    int tc;
    scanf("%d",&tc);

    for (int i=0;i<tc;i++){
        int a;
        scanf("%d",&a);
        printf("Case #%d:\n",i+1);
            for(int j = 0; j < a ; j++){
                int m = j + 1;
            if (((m%3 == 0) || (m%5 == 0)) && (m%15 != 0))
            {
                 printf("%d Jojo\n",m);
            }       
                else
            {
                printf("%d Lili\n",m);
            }           
        }
    }   
    return 0;
}