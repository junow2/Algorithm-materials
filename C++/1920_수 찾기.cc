#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int N, M, num; 
  cin >> N;
  int arr[N];
  for (int i=0; i < N; i++) cin >> arr[i];
  sort(arr, arr+N);

  cin >> M; 
  for (int i=0; i < M; i++) {
    cin >> num;
    cout << binary_search(arr, arr+N, num) << endl;
  }
} 