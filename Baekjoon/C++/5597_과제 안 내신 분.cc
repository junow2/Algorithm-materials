#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000

int n;
int arr[32];

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  for (int i=0; i<28; i++) {
    cin >> n; arr[n] = 1;
  }

  for (int i=1; i<=30; i++) 
    if (!arr[i]) cout << i << endl;
}