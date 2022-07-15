#include <stdio.h>
int main()
{
    int n;
        scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char a[501];
        int len=0;
        int palindrome = 1;
            scanf("%s", a);
        for(len=0;a[len]!= '\0';++len);
        
        for(int j =0;j<len/2;j++){
            if((a[j])!=(a[len-j-1]))palindrome=0;
        }
            if (palindrome) 
                printf("Case #%d: Yay, it's a palindrome\n",i+1);
            else
                printf("Case #%d: Nah, it's not a palindrome\n",i+1);
    }
    return 0;
}