#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int N; 
int A[52];

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> N; 
  for (int i=0; i<N; i++) cin >> A[i]; 

  sort(A, A+N); cout << A[0] * A[N-1]; 

}