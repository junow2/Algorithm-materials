#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int n, i, j, k, m;

int main(void) {
  cin >> n;
  m = (n*2) - 1;

  for (i = m; i > 2; i-=2) {
    for (k = 1; k < i; k+=2) {
      cout << " ";
    }
    for (j = 0; j <= m-i; j++) {
      cout << "*";
    }
    cout << endl;
  }

  for (i = 0; i < n; i++) {
    for (k = 0; k < i; k++) {
      cout << " ";
    }
    for (j = 1; j <= 2*(n-i)-1; j++) {
      cout << "*";
    }
    cout << endl;
  }
}