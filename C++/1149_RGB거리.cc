#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'

int D[1004][3], S[1004][3];

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int T; cin >> T; 
  for (int i=1; i <= T; i++) {
    
    for (int j=0; j < 3; j++) cin >> S[i][j];
  }

  D[1][0] = S[1][0], D[1][1] = S[1][1], D[1][2] = S[1][2]; 
  for (int i=2; i <= T; i++) {
    D[i][0] = min(D[i-1][1], D[i-1][2]) + S[i][0],
    D[i][1] = min(D[i-1][0], D[i-1][2]) + S[i][1],
    D[i][2] = min(D[i-1][0], D[i-1][1]) + S[i][2];
  }

  cout << min({D[T][0], D[T][1], D[T][2]});
}