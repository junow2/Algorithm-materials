#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'

int DP[13] = {1, 2, 4, 7, 13, }; 

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  for (int i=0; i < 11; i++) 
    if (!DP[i]) DP[i] = DP[i-3] + DP[i-2] + DP[i-1]; 

  // for (int i: DP) cout << i << " ";

  int T, inp; cin >> T; 
  for (int i=0; i < T; i++) {
    cin >> inp; cout << DP[inp-1] << endl;
  }
}