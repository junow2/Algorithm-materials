#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  long long T; cin >> T;
  while (T--) {
    long long n; cin >> n;

    if ( n%9 == 0 || n%3 == 2 ) cout << "TAK";
    else cout << "NIE";

    if (!T) continue;
    else cout << endl; 
  }
} 
