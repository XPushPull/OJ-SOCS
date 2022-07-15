#include <stdio.h>
#include <string.h>

int main(){
char str[10001];
scanf("%[^\n]",str);
for (int i=0;i<strlen(str);i++){
    if((str[i]>='a') && (str[i]<='z')){
        str[i] -= 32;
    }
}

for (int i=0;i<strlen(str);i++){
    if (str[i]=='I'){
        str[i]='1';
    }
    else if (str[i]=='R'){
        str[i]='2';
    }
    else if (str[i]=='E'){
        str[i]='3';
    }
    else if (str[i]=='A'){
        str[i]='4';
    }
    else if (str[i]=='S'){
        str[i]='5';
    }
    else if (str[i]=='G'){
        str[i]='6';
    }
    else if (str[i]=='T'){
        str[i]='7';
    }
    else if (str[i]=='B'){
        str[i]='8';
    }
    else if (str[i]=='P'){
        str[i]='9';
    }
    else if (str[i]=='O'){
        str[i]='0';
    }
}
printf("%s\n",str);
    return 0;
}