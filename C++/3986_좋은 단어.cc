#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int N, cnt = 0; cin >> N;
  while(N--) {
    string word; cin >> word;
    stack <char>s;

    for (auto c: word) {
      if (s.empty()) s.push(c);
      else {
        if (s.top() == c) s.pop();
        else s.push(c);
      }
    }
    if (s.empty()) cnt++;
  }
  cout << cnt;
}
