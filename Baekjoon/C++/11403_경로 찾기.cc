#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

int N, a, b, arr[102][102];
vector <int> v[102];
bool vis[102];

void DFS(int x) {

  for (int i=0; i<v[x].size(); i++) {

    if (vis[v[x][i]]) continue;
    vis[v[x][i]] = 1; DFS(v[x][i]); 
  }
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N;
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
      cin >> a;
      if (!a) continue;
      v[i].push_back(j);
    }
  }

  for (int i=0; i<N; i++) {
    fill(vis, vis+N, 0); DFS(i); 

    for (int i=0; i<N; i++) cout << vis[i] << " "; cout << endl;
  }
}