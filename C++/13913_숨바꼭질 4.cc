#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int vis[100002], path[100002];
queue<int> q; 

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  
  int N, K; cin >> N >> K;
  vis[N] = 1; q.push(N); 
  while (vis[K] == 0) {
    int cur = q.front(); q.pop();
    for (int dir: {cur-1, cur+1, 2*cur}) {
      if (dir < 0 || dir > 100001) continue;
      if (vis[dir] != 0) continue;

      vis[dir] = vis[cur] + 1; 
      q.push(dir); path[dir] = cur; 
    }
  } 
  cout << vis[K]-1 << endl;
  deque<int> track = {K};
  while (track.front() != N) 
    track.push_front(path[track.front()]);
  for (int c: track) cout << c << ' ';
}
