#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  deque <int> d;
  int N; cin >> N;
  for (int i=0; i < N; i++) {
    int num;
    string s; cin >> s;
    if (s == "push_front") {
      cin >> num; 
      d.push_front(num);
    }
    else if (s == "push_back") {
      cin >> num;
      d.push_back(num);
    }
    else if (s == "pop_front") {
      if (d.empty())  cout << -1 << '\n';
      else {
        cout << d.front() << '\n';
        d.pop_front();
      }
    }
    else if (s == "pop_back") {
      if (d.empty()) cout  << -1 << '\n';
      else {
        cout << d.back() << '\n';
        d.pop_back();
      }
    }
    else if (s == "size") cout << d.size() << '\n';
    else if (s == "empty") {
      if (d.empty()) cout << 1 << '\n';
      else cout << 0 << '\n';
    }
    else if (s == "front") {
      if (d.empty()) {
        cout  << -1 << '\n';
        continue;
      }
      cout << d.front() << '\n';
    }
    else if (s == "back") {
      if (d.empty()) {
        cout  << -1 << '\n';
        continue;
      }
      cout << d.back() << '\n';
    }
  }
}
