#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'

int a, b, c, m, res;

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> a >> b >> c; 
  m = b + c; 
  if (m >= 60) { 
    a += m / 60;
    m -= 60 * (m/60); 
  }

  if (a >= 24) a -= 24;

  cout << a << " " << m; 
}