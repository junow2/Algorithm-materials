#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int n, i, j, k, m;

int main(void) {
  cin >> n;
  
  for (i=1; i < n; i++) {
    for (j=0; j < i; j++) {
      cout << "*";
    }
    for (m=0; m < 2*(n-i); m++)  {
      cout << " ";
    }
    for (k=0; k < i; k++) {
      cout << "*";
    }
    cout << endl;
  }
  for (i=0; i <n; i++) {
    for (j=0; j < n-i; j++) {
      cout << "*";
    }
    for (m=0; m < 2*i; m++) {
      cout << " ";
    }
    for (k=0; k < n-i; k++) {
      cout << "*";
    }
    cout << endl;
  }
}