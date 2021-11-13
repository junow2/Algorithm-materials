#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int N; cin >> N;
  queue <int> q;
  // 1 ~ N. N이 제일 아래 1이 제일 위라 가정 
  for (int i=1; i <= N; i++) q.push(i);

  while (q.size() != 1) {
    int st = 0;
    q.pop(); // 제일 위에 있는 카드를 버림 
    st = q.front(); // 그 다음 제일 위에 있는 카드를 버림  
    q.pop(); // 그 다음 제일 위에 있는 카드를 버림 
    q.push(st); // 버린 카드를 제일 아래에 있는 카드 밑으로 옮김.
  }
  cout << q.front();
}
