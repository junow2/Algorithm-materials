#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

int N, M, i, j;
int arr[102];

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);


  cin >> N >> M;
  for (int x=1; x<=N; x++) arr[x] = x;
  
  for (int x=0; x<M; x++) {
    cin >> i >> j; reverse(arr+i, arr+j+1); 
  }

  for (int x=1; x<=N; x++) cout << arr[x] << ' ';
} 
