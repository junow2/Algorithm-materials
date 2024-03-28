#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int T, N, money; 
int coin[22], dp[10002]; 

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> T;

  for (int a=0; a<T; a++) {
    cin >> N; 
    for (int i=1; i<=N; i++) cin >> coin[i];
    cin >> money; 
    dp[0] = 1;

    for (int i=1; i<=N; i++)
      for (int j=coin[i]; j<=money; j++) dp[j] += dp[j-coin[i]]; 

    cout << dp[money] << endl; 
    fill(coin, coin+22, 0); fill(dp, dp+10002, 0); 
  }
}
