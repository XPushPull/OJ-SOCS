#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 100001
#define ll long long
#define ld long double

int main(){
    ll tc;
    scanf("%lld",&tc);
    for(int t=0;t<tc;t++){
        int n;
        char x[MxN], y[MxN], z[MxN];
        scanf("%d %s %s",&n,x,y);

        for (int i = 0; i < n; i++)
        {
            strcpy(z, x);
            strcpy(x, y);
            strcat(y, z);
        }
        printf("Case #%d: ",t+1);
        printf("%s\n", x);
    }
return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// //versi dape
// #define MxN 1000
// #define ll long long
// #define ld long double

// int main() {
//   int t; scanf("%d",&t);
//   int id = 1;
//   while (t--) {
//     char result[MxN], right[MxN], left[MxN];
//     int n; char a,b; scanf("%d %s %s",&n,left,right);
//     if (n == 0) {
//       printf("Case #%d: %s\n",id++,left);
//       continue;
//     }
//     else if (n == 1) {
//       printf("Case #%d: %s\n",id++,right);
//       continue;
//     }
//     for (int i = 2; i <= n; i++) {
//       strcpy(result,right);
//       strcat(result,left);
//       strcpy(left,right);
//       strcpy(right,result);
//     }
//     printf("Case #%d: %s\n",id++,result);
//   }
//   return 0;
// }