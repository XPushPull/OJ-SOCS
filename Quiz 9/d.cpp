#include<stdio.h>
#include<string.h>

using namespace std;
#define nl '\n'

int main(){

    int t;
    int n;

    scanf("%d" , &t);

    for(int i = 0 ; i < t ; i++){
        scanf("%d" , &n);
        int arr[n] , ans[n];

        for(int x = 0 ; x < n ; x++){
            scanf("%d" , &arr[x]);

            ans[x] = -1;
        }

        int maxFrequency = -1;
        int minNumber = -1;
        for(int y = 0 ; y < n ; y++){
        int countFrequency = 1;
            for(int z = y + 1 ; z < n ; z++){
                if(arr[z] == arr[y]){
                    countFrequency++;
                    ans[z] = 0;
                }
            }

            if(countFrequency >= maxFrequency){
                if(countFrequency == maxFrequency){
                    maxFrequency = countFrequency;
                    if(arr[y] < minNumber){
                        minNumber = arr[y];
                    }
                }else{
                    minNumber = arr[y];
                    maxFrequency = countFrequency;
                }
            }

            if(ans[y] != 0){
                ans[y] = countFrequency;
            }
        }

        printf("Case #%d: %d\n" , i + 1 , maxFrequency);
        printf("%d\n" , minNumber);

    }

}   