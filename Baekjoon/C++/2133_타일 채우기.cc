#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;

int N; 
int dp[32] = {0, 0, 3, 0, 11, }; 

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N; 

  for (int i=6; i<=N; i+=2) {
    dp[i] = dp[i-2] * dp[2] + 2; 
    for (int j=4; i-j >= 0; j+=2) dp[i] += dp[i-j] * 2; 
  }

  cout << dp[N];
}
