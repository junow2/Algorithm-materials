#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

int T, n, cnt; 
bool arr[102];

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> T; 
  while (T--) {
    cin >> n; 
    cnt = 0; fill(arr, arr+n+1, 0);

    for (int i=2; i<=n; i++)
      for (int j=i; j<=n; j+=i) arr[j] = !arr[j];
    
    for (int i=1; i<=n; i++) 
      if (!arr[i]) cnt++;  

    cout << cnt << endl;
  }
}