#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int n;
int arr[10];
string num;

int main(void) {
  cin >> n;
  num = to_string(n);

  for (auto c: num) {
    arr[c-'0']++;
  }
  if ((arr[6] + arr[9]) % 2) {
    arr[6] = (arr[6] + arr[9]) / 2 + 1;
  } else {
    arr[6] = (arr[6] + arr[9]) / 2;
  }
  arr[9] = arr[6];
  int max = 0;
  for (int k: arr) {
    if (k > max) {
      max = k;
    }
  }
  cout << max;
}