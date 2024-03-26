#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

string s;

bool p(string s, int a) {

  if (a == 0) return 1;
  int j = a;

  for (int i=0; i<a; i++, j--) {
    if (s[i] == s[j]) continue;
    else return 0;
  }
  return 1; 
}

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> s; 
  cout << p(s, s.size()-1);
} 

