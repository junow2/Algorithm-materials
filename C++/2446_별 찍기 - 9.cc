#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int n, i, j, k, m;

int main(void) {
  cin >> n;
  
  for (i=1; i < n; i++) {
    for (j=1; j < i; j++) {
      cout << " ";
    }
    for (m=0; m < 2*(n-i)+1; m++) {
      cout << "*";
    }
  cout << endl;
  }
  for (i=1; i < n+1; i++) {
    for (j=0; j < n-i; j++) {
      cout << " ";
    }
    for (m=0; m < 2*i-1; m++) {
      cout << "*";
    }
    cout << endl;
  }
}