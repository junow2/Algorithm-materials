#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int gcd(int a, int b) { 
  if (b == 0) return a;
  
  return gcd(b, a%b); 
}

int lcm(int a, int b, int c) { 
  return a * b / c;
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  
  int n, m, tmp; cin >> n >> m; 
  int g = gcd(n, m);

  cout << g << endl << lcm(n, m, g);
} 
