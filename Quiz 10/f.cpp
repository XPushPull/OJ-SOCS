#include<stdio.h>
#include<string.h>

int main(){

    int n;
    scanf("%d" , &n);

    int oddNumber = 0;
    int arr[n];
    int x = 0;
    long long ans = 0;

    for(int i = 0 ; i < n ; i++){

        int input;
        scanf("%d" , &input);

        if(input % 2 == 1){
            oddNumber++;
            arr[x] = input;
            x++;
        }else{
            ans += input;
        }

    }

    if(x % 2 == 1){
        for(int i = 1 ; i < x ; i++){
           ans += arr[i];
        }
    }else{
        for(int i = 0 ; i < x ; i++){
            ans += arr[i];
        }
    }

    printf("%lld\n" , ans);
}   