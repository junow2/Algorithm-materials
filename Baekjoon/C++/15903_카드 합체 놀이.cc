#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;

int n, m, inp, cnt;
ll ans, tmp;
priority_queue <ll, vector <ll>, greater<>> pq; 

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> n >> m; 
  for (int i=0; i<n; i++) { cin >> inp; pq.push(inp); }

  for (cnt=0; cnt<m; cnt++) {
    tmp = pq.top(); pq.pop();
    tmp += pq.top(); pq.pop();
    pq.push(tmp); pq.push(tmp);
  }

  while (!pq.empty()) { ans += pq.top(); pq.pop(); } cout << ans;
}