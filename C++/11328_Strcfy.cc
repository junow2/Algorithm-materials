#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int main(void) {
  int N;
  cin >> N;
  
  for (int i=0; i < N; i++) {
    int a[26] = {0, };
    string s1, s2;
    cin >> s1 >> s2; 

    for (auto c: s1) a[c-'a']++;
    for (auto c: s2) a[c-'a']--;

    bool isTrue = true; 
    for (int c: a) {
      if (c != 0) isTrue = false;
    }

    if (isTrue) cout << "Possible\n";
    else cout << "Impossible\n";
  }

}
