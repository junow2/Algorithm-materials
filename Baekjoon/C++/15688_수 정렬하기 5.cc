#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

int N;

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N; 
  int arr[N] = {}; 
  for (int i=0; i<N; i++) cin >> arr[i]; 
  sort(arr, arr+N);
  for (int i: arr) cout << i << endl;
}