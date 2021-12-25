#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

struct tri { int x, y, lv; };

int board[1002][1002], mv[10], cnt[10];
int mx[4] = {1, 0, -1, 0}, my[4] = {0, 1, 0, -1};
queue<tri> q[10];

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  
  int N, M, P; char op; cin >> N >> M >> P;
  
  for (int i=1; i <= P; i++) cin >> mv[i];    
   
  for (int j=0; j < N; j++) { 
    for (int k=0; k < M; k++) {
      cin >> op;
      if (op == '#') continue;
      else if (op == '.') board[j][k] = 1;    
      else {
        q[op-'0'].push({j, k, 0});
        cnt[op-'0']++; 
      }  
    }
  }

  while(1) {
    bool isFin = 0; 
    for (int i=1; i <= P; i++) {
      queue<tri> nq;
      while(!q[i].empty()) {
        auto cur = q[i].front(); q[i].pop();
        if (cur.lv >= mv[i]) {
          nq.push({cur.x, cur.y, 0});
          continue;
        }
        for (int dir=0; dir < 4; dir++) {
          int nx = cur.x + mx[dir];
          int ny = cur.y + my[dir];
          if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
          if (!board[nx][ny]) continue;
          q[i].push({nx, ny, cur.lv+1});
          board[nx][ny] = 0; 
          cnt[i]++; isFin = 1; 
        } 
      }
      q[i] = nq; 
    }
    if (!isFin) break; 
  }

  for (int i=1; i <= P; i++) cout << cnt[i] << " ";
}
