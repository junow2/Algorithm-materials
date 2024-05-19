#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;

int T, M, N, x, y;
vector <pair <int, int>> v;

int gcd(int a, int b) { 
  int c; 
  while (b != 0) { 
    c = a % b; 
    a=b, b=c; 
  }
  return a;
}

int lcm(int a, int b) {
  return a*b / gcd(a, b);
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> T; 
  for (int i=0; i<T; i++) {
    cin >> M >> N >> x >> y;

    int mx = lcm(M, N); 
    int tmp = x; 

    while (tmp <= mx) {
      if ((tmp-1) % N + 1 == y) break; 
      tmp += M;   
    }

    if (tmp > mx) cout << -1 << endl; 
    else cout << tmp << endl;
  }
}