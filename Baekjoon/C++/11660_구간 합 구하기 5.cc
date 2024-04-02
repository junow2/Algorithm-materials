#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

int N, M, a1, a2, b1, b2; 
int board[1028][1028], dp[1028][1028];

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N >> M; 
  
  for (int i=1; i<=N; i++) 
      for (int j=1; j<=N; j++) { 
        cin >> board[i][j]; 
        dp[i][j] = dp[i-1][j] + dp[i][j-1] + board[i][j] - dp[i-1][j-1]; 
      }

  for (int i=0; i<M; i++) {
    cin >> a1 >> b1 >> a2 >> b2; 
    cout << dp[a2][b2] - dp[a2][b1-1] - dp[a1-1][b2] + dp[a1-1][b1-1] << endl;
  }
}