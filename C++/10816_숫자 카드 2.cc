#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;

int N, M, inp;
int A[10000002], B[10000002]; 
vector <pair<int, int>> v; 

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N; 
  for (int i=0; i<N; i++) { 
    cin >> inp; 
    
    if (inp < 0) B[abs(inp)]++; 
    else A[inp]++; 
  }

  cin >> M;
  for (int i=0; i<M; i++) { 
    cin >> inp; 
    if (inp < 0) v.push_back({inp, 0});
    else v.push_back({inp, 1}); 

  }

  for (int i=0; i<v.size(); i++) {
    if (v[i].second == 1) cout << A[v[i].first] << ' ';
    else {cout << B[abs(v[i].first)] << ' ';  }
  }

}