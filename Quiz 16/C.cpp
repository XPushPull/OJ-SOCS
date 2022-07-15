#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 100001
#define ll long long
#define ld long double

ll Bs(ll arr[], ll int q, ll int sun){
  unsigned ll int sum;
    ll start=0, f=q;
    while(start<f){
        sum = (start+f)/2;
        if(sun<= arr[sum]){
            f=sum;
        }else{
            start=sum+1;
        }
    }
    if(arr[start]==sun){
        start++;
    }
  return start;
}

int main(){
  ll a[MxN];
	int s;scanf("%d",&s);
	for(int i=0;i<s;i++) scanf("%lld",&a[i]);
	for(int i=1;i<s;i++) a[i] += a[i-1];
	long t; scanf("%d",&t);
	for(long int j=0;j<t;j++){
		ll sil; scanf("%lld",&sil);
		if(a[0]>sil) printf("Case #%ld: -1\n",j+1);
		else printf("Case #%d: %lld\n",j+1,Bs(a,s,sil));	
	}
}
