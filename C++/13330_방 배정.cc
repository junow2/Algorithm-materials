#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int N, K, S, Y; // 여학생이면 0, 남학생이면 1 
int room[12] = {0, };

int main(void) {
  cin >> N >> K;

  for (int i=0; i < N; i++) {
    cin >> S >> Y;
    if (S == 0) room[Y-1]++;
    else room[Y+5]++;
  }
  
  int cnt = 0;
  for (int c: room) {
    if (c != 0) cnt += c/K;
      if (c%K != 0) cnt++;
  }
  cout << cnt;
}
