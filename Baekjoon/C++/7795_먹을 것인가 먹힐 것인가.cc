#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

int T, N, M;

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> T;
  for (int x=0; x<T; x++) {
    cin >> N >> M; 
    int A[N] = {}, B[M] = {};

    for (int i=0; i<N; i++) cin >> A[i]; 
    for (int i=0; i<M; i++) cin >> B[i]; 
    
    sort(A, A+N, greater<>()); sort(B, B+M);

    int ans = 0;

    for (int i=0; i<N; i++) {
      for (int j=0; j<M; j++) {
        if (A[i] > B[j]) ans++;
        else break;
      }
    }
    cout << ans << endl;
  }
}