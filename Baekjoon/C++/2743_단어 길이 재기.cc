#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

string S;
int N; 

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> S; 
  for (char c: S) N += 1;

  cout << N;
} 