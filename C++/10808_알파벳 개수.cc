#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int arr[26];
int cnt;
string s;

int main(void) {
  cin >> s;
  
  for (auto c: s) {
    arr[c-'a']++;
  }
  for (int i=0; i<26; i++) {
    cout << arr[i] << " ";
  }
}