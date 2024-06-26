#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

int N, M, u, v, ans;
vector <int> mat[1002]; 
bool vis[1002];

void bfs() {
  queue <int> q; 
  for (int i=1; i<=N; i++) {
    if (vis[i]) continue;

    q.push(i);
    vis[i] = true;
    while(!q.empty()) {
      int cur = q.front();
      q.pop(); 
      for (auto nxt: mat[cur]) {
        if (vis[nxt]) continue;
        q.push(nxt);
        vis[nxt] = true;
      }
    }
    ans++;
  }
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N >> M;

  for (int i=0; i<M; i++) {
    cin >> u >> v; 
    mat[u].push_back(v);
    mat[v].push_back(u); 
  }

  bfs();
  cout << ans;
}