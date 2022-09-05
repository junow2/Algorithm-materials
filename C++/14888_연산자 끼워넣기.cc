#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, m, mn = 1000000001, mx = -1000000001, res; 
int num[12], op[4];

void func(int res, int t) {
  if (t == n) { 
    if (res > mx) mx = res;
    if (res < mn) mn = res;
    return; 
  }

  for (int i=0; i < 4; i++) {
    if (op[i] == 0) continue;

    op[i] -= 1; 
    if (i == 0) {
      func(res + num[t], t+1);
    }
    else if (i == 1) {
      func(res - num[t], t+1);
    }
    else if (i == 2) {
      func(res * num[t], t+1);
    }
    else if (i == 3) {
      func(res / num[t], t+1);
    }
    op[i] += 1; 
  }
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
 
  cin >> n;
  for (int i=0; i < n; i++) cin >> num[i]; 
  for (int i=0; i < 4; i++) cin >> op[i];

  func(num[0], 1);
  cout << mx << endl << mn; 
}