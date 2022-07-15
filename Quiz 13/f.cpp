#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    //PushPull
#define MxN 101
#define ll long long
#define ld long double

int n, dp[MxN], arr[MxN];

void dfs(int index) {
  if (index >= n) 
    return;
  if (index == 0) 
    dp[index] = arr[index];
  else dp[index] = arr[index] + dp[(index-1)/2];
  dfs(index*2+1) //for anak kiri;
  dfs(index*2+2) //for anak kanan;
}

int main() {
  int tc; 
  scanf("%d",&tc);
  for (int i = 1; i <= tc; i++) {
    scanf("%d",&n);
    for (int j = 0; j < n; j++) {
      scanf("%d",&arr[j]);
    }
    dfs(0);
    printf("Case #%d:\n",i);
    int pangkat2Terbesar = 1;
    while (pangkat2Terbesar * 2 <= n) {
      pangkat2Terbesar *= 2;
    }
    pangkat2Terbesar--;
    int noOfLeafNode = (n+1)/2;
    for (int j = pangkat2Terbesar; j < n; j++) {
      printf("%d\n",dp[j]);
      noOfLeafNode--;
    }
    for (int j = pangkat2Terbesar-noOfLeafNode; j < pangkat2Terbesar; j++) {
      printf("%d\n",dp[j]);
    }
  }
}