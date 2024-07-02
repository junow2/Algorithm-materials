#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;

int n, k, inp; 
int coin[102], dp[10002] = {};


int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> n >> k;
  for (int i=0; i<n; i++) { 
    cin >> coin[i]; 
    if (coin[i] <= 10000) dp[coin[i]] = 1; 
  } 


  for (int i=0; i<n; i++) {
    if (i != 0 and coin[i] == coin[i-1]) continue;

    for (int j=coin[i]; j<=k; j++) {

      if (dp[j - coin[i]] != 0) {
        if (dp[j] == 0) dp[j] = dp[j-coin[i]] + 1;
        else dp[j] = min(dp[j], dp[j-coin[i]] + 1);
      }
    
      // cout << "dp[" << j << "]: " << dp[j] << endl;
    }
  }

  // for (int i=0; i<=k; i++) cout << dp[i] << " "; cout << endl;
  (dp[k] == 0) ? cout << -1 : cout << dp[k];
}
