#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    //PushPull
#define MxN 105
#define ll long long
#define ld long double

int n,m,count;
char map[MxN][MxN];
int visited[MxN][MxN];

void dfs(int row, int col) {
  if (row < 0 || row >= n || col < 0 || col >= m || map[row][col] == '#' || visited[row][col]) return;
  if (map[row][col] == '*') count++;
  visited[row][col] = 1;
  dfs(row,col+1);
  dfs(row+1,col);
  dfs(row,col-1);
  dfs(row-1,col);
}

int main() {
  int tc; 
  scanf("%d",&tc);
  for (int k = 1; k <= tc; k++) {
    memset(visited,0,sizeof(visited));
    count = 0;
    scanf("%d %d",&n, &m); 
    int rowP, colP;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        scanf("%c",&map[i][j]);
        if (map[i][j] == 'P') {
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