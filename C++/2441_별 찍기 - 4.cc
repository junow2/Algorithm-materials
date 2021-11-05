#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int n, i, j, k;

int main(void) {
  cin >> n;

  for (i = 0; i < n; i++) {
    for (k = 0; k < i; k++ ) {
      cout << " ";
    }
    for (j = 0; j < n-i; j++) {
      cout << "*";
    }
    if ( i != n-1) {
      cout << endl;
    } 
  }
}