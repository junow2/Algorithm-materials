#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int N, K, cnt;
int dp[1002]; 

void F(int x) {
  

  for (int i=x, j=1; i*j <= N; i, j++) { 
    
    if (dp[i*j] == 0) { dp[i*j] = 1; cnt++; }

    // cout << i*j << " " << cnt << endl;
    if (cnt == K) { cout << i*j; return; }
    }
}

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> N >> K; 

  for (int i=2; i<=N; i++) {
    if (cnt == K) break; 

    F(i); 
  }
}
