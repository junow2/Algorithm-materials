#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

int N, M, ans;
int board[1002][1002]; 
string inp; 

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N >> M; 
  for (int i=1; i<=N; i++) {
    cin >> inp; 
    for (int j=1, k=0; j<=M; j++, k++) board[i][j] = inp[k] - '0';
  }

  for (int i=1; i<=N; i++) {
    for (int j=1; j<=M; j++) {
      if (board[i][j] != 0)
        board[i][j] = min({board[i-1][j-1], board[i-1][j], board[i][j-1]}) + 1; 
      
      if (board[i][j] > ans) ans = board[i][j];
    }
  }

  cout << ans*ans; 
}
