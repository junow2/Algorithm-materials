#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;

int N, s, t;
vector <pair <int, int>> v; 
priority_queue <int, vector <int>, greater<int>> q;

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N;
  for (int i=0; i<N; i++) { cin >> s >> t; v.push_back({s, t}); }

  sort(v.begin(), v.end());

  for (int i=0; i<v.size(); i++) {
    q.push(v[i].second);
    if (q.top() <= v[i].first) q.pop();
  }

  cout << q.size();
}