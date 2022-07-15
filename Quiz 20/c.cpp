#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PushPull
#define MxN 105
#define ll long long
#define ld long double

int n,m,count;
char map[MxN][MxN];

void dfs(int row, int col) {
  if (row < 0 || row >= n || col < 0 || col >= m || map[row][col] == '#') 
    return;
  if (map[row][col] == '.') {
        map[row][col]='#'; 
        count++;
  }
  dfs(row,col+1);
  dfs(row+1,col);
  dfs(row,col-1);
  dfs(row-1,col);
}

int main(){
  int tc;  scanf("%d",&tc); 
  for (int k = 1; k <= tc; k++) {
    count = 0;
    n = 0, m = 0; scanf("%d %d",&n, &m); 
    int rowP, colP;
    for (int i = 0; i < n; i++) {
        scanf("%s",map[i]); 
      for (int j = 0; j < m; j++) {
        if (map[i][j] == 'S') {
          rowP = i;
          colP = j;
        }
      }
      getchar();
    }
    dfs(rowP,colP);
    printf("Case #%d: %d\n",k,count);
  }
}