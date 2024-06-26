#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;

int N, inp, res;
bool fl; 
vector <int> pl, mi, ans; 

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N; 
  for (int i=0; i<N; i++) {
    cin >> inp; 
    if (inp == 1) { ans.push_back(1); continue; }
    if (inp == 0) { fl = true; continue; }
    (inp > 0) ? pl.push_back(inp) : mi.push_back(inp); 
  }

  sort(pl.begin(), pl.end(), greater<int>()); 
  sort(mi.begin(), mi.end());

  if (pl.size() > 0) {
    if (pl.size()%2) ans.push_back(pl.back());
    for (int idx=0; idx<pl.size()-1; idx+=2) ans.push_back(pl[idx]*pl[idx+1]); 
  }
  
  if (fl and mi.size()%2 == 1) mi.pop_back();
  if (mi.size() > 0) {
    if (mi.size()%2) ans.push_back(mi.back());
    for (int idx=0; idx<mi.size()-1; idx+=2) ans.push_back(mi[idx]*mi[idx+1]); 
  }
  
  // for (int c: ans) cout << c << " "; cout << endl;
  for (int c: ans) res += c; cout << res;
}


