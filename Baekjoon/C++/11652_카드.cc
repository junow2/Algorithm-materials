#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

int T, mn = -100002;
ll ans;
ll arr[100002]; 
vector <pair<ll, int>> v;

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> T;
  for (int i=0; i<T; i++) cin >> arr[i];

  sort(arr, arr+T); 
  v.push_back({arr[0], 1}); 

  for (int i=1; i<T; i++) {

    if (v.back().first == arr[i]) v.back().second++;
    else v.push_back({arr[i], 1}); 
  }

  for (int i=v.size()-1; i>=0; i--) 
    if (v[i].second >= mn) { ans = v[i].first; mn = v[i].second; }

  cout << ans; 
}