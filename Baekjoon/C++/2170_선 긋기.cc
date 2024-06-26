#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;

int N, x, y;
vector <pair <int, int>> v;

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N; 
  for (int i=0; i<N; i++) { cin >> x >> y; v.push_back({x, y}); }
  sort(v.begin(), v.end()); 

  int st = v[0].first, en = v[0].second, sum = 0;
  for (int i=1; i<v.size(); i++) {
  
    if (v[i].first <= en and v[i].second > en) en = v[i].second;

    if (v[i].first > en) {
      sum += en - st; 
      st = v[i].first, en = v[i].second;
    } 
  }
  sum += en - st;
  cout << sum; 
}