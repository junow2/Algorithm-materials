#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;

int N, M, a, b;
int vis[10002], ans[10002];
vector <int> v[10002];

void BFS(int x) {
  
  queue <int> q;
  for (int nxt: v[x]) { vis[nxt] = 1; q.push(nxt); }

  while (!q.empty()) {
    int cur = q.front(); q.pop();
    
    for (int nxt: v[cur]) { 
      if (vis[nxt] != 0) continue;
      
      vis[nxt] = vis[cur] + 1; q.push(nxt); 
    }
  }
}
 
int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N >> M;
  for (int i=0; i<M; i++) { cin >> a >> b; v[b].push_back(a); }

  for (int i=1; i<=N; i++) { 
    fill(vis, vis+10002, 0); vis[i] = -1; BFS(i); 

    // for (int j=1; j<=N; j++) cout << vis[j] << " "; cout << endl;    
    for (int j=1; j<=N; j++) 
      if (vis[j] > 0) ans[i]++;
  }

  int mx = *max_element(ans+1, ans+N+1); 
  for (int i=1; i<=N; i++) 
    if (ans[i] == mx) cout << i << " ";
}