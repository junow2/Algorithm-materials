#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  
  int N; cin >> N;
  int arr[N];
  for (int i=0; i < N; i++) {
    cin >> arr[i];
  }
  sort(arr, arr+N); 
  for (int ans: arr) cout << ans << endl;
} 
