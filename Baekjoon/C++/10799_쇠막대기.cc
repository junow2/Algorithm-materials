#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int ans = 0;
  string sticks; 
  stack <char>s;
  cin >> sticks; 
  for (int i=0; i < sticks.length(); i++) {
    if (sticks[i] == '(') s.push(sticks[i]);
    else {
      if (sticks[i-1] == '(') {
        s.pop();
        ans += s.size();
      } else {
        s.pop();
        ans++;
      }
    }
  }
  cout << ans; 
}