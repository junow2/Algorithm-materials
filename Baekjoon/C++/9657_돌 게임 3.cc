#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

int N, tmp; 
int dp[1002] = {1, 1, 0, 1, 1}; 
int fl = true; 

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N; 
  for (int i=5; i<=N; i++) 
    if (dp[i-1] + dp[i-3] + dp[i-4] != 3) dp[i] = 1; 

  if (dp[N]) cout << "SK";
  else cout << "CY";
}
