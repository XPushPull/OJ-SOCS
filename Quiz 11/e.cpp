#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MxN 255

void function(char str[]){
    for (int index = 0; index < strlen(str); index++){
    if (str[index] >= 'a' && str[index] <= 'z'){
    str[index] -= 32;
    } else if (str[index] >= 'A' && str[index] <= 'Z') {
    str[index] += 32;
        }
    }
}

int main(){
    int tc;
    char str[1000];
    scanf("%d",&tc);
    for(int i=0; i<tc;i++){
        scanf("%s",&str);
        getchar();
        function(str);
        printf("Case #%d: ",i+1);
        for(int j = strlen(str)-1; j>=0; j--){
            printf("%c", str[j]);
            }
        printf("\n");
        }
    return 0;
}

