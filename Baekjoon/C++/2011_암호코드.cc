#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;

string inp; 
int dp[5002] = {1, }; 

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> inp; 
  if (inp[0] == '0') { cout << 0; return 0; }
  
  for (int i=1, n=0; i<=inp.length(); i++, n++) {

    if (inp[n] != '0') dp[i] = dp[i-1];

    int num = (inp[n-1]-'0')*10 + inp[n]-'0';
    if (num >= 10 and num <= 26)
      dp[i] += dp[i-2] % 1000000;
  }
  // for (int i=1; i<=inp.length(); i++) cout << dp[i] << " "; cout << endl;
  cout << dp[inp.length()] % 1000000;
}20
