#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;

int N, M, S, E, mid;
int board[2002], dp[2002][2002];

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> N;
    for (int i=1; i<=N; i++) cin >> board[i];

    dp[1][1] = 1; 
    for (int i=1; i<=N; i++) {
      dp[i][i] = 1;
      if (board[i] == board[i+1]) dp[i][i+1] = 1;
    }
    for (int i=2; i<N; i++) 
      for (int j=1; i+j<=N; j++) 
        if (board[j] == board[i+j] and dp[j+1][i+j-1] == 1) dp[j][i+j] = 1;
    
 
    cin >> M;
    for (int i=0; i<M; i++) {
      cin >> S >> E;
      cout << dp[S][E] << endl;  
    }
}
