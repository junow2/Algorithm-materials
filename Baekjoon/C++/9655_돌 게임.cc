#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000

int N;
int dp[1002]; 

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N; 
  if (N % 2 == 0) cout << "CY"; 
  else cout << "SK"; 
}