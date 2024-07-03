#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;

int M, N;
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
int board[505][505], dp[505][505];

int DFS(int x, int y) {

  if (x == M and y == N) return 1; 
  if (dp[x][y] != -1) return dp[x][y];

  dp[x][y] = 0; 
  for (int i=0; i<4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (board[nx][ny] >= board[x][y]) continue;
    if (nx < 1 || ny < 1 || nx > M || ny > N) continue;
    
    dp[x][y] += DFS(nx, ny);
  }
  
  return dp[x][y];
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> M >> N; 
  for (int i=1; i<=M; i++)
    for (int j=1; j<=N; j++) { cin >> board[i][j]; dp[i][j] = -1; }

  cout << DFS(1, 1);

  // for (int i=1; i<=M; i++) { cout << endl;
  //   for (int j=1; j<=N; j++) cout << dp[i][j] << " ";
  // }

}
