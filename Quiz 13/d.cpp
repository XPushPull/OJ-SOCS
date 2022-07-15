#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    //PushPull
#define MxN 8
#define ll long long
#define ld long double
#define INF 2000000000

int visited[MxN][MxN];

void dfs(int row, int col, int step) {
  if (row < 0 || row >= 8 || col < 0 || col >= 8) 
  return;
  if (step < visited[row][col]) visited[row][col] = step;
  else return;
  dfs(row+2,col+1,step+1);
  dfs(row+2,col-1,step+1);
  dfs(row+1,col+2,step+1);
  dfs(row+1,col-2,step+1);
  dfs(row-2,col+1,step+1);
  dfs(row-2,col-1,step+1);
  dfs(row-1,col+2,step+1);
  dfs(row-1,col-2,step+1);
}

int main() {
  int tc; 
  scanf("%d",&tc);
  for (int k = 1; k <= tc; k++) {
    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        visited[i][j] = INF;
      }
    }
    char input1[MxN], input2[MxN];
    scanf("%s %s",input1,input2); 
    getchar();
    int row1, col1, row2, col2;

    row1 = 8-(input1[1]-'0');
    col1 = input1[0]-'A';

    row2 = 8-(input2[1]-'0');
    col2 = input2[0]-'A';

    dfs(row1,col1,0);
    printf("Case #%d: %d\n",k,visited[row2][col2]);
  }
  return 0;
}