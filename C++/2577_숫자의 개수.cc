#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int arr[3], num[10];
int cnt, n;
int mul_i;
string mul;

int main(void) {
  for (int i=0; i < 3; i++) {
    cin >> n;
    arr[i] = n;
  }
  mul_i = arr[0] * arr[1] * arr[2];
  mul = to_string(mul_i);  
  for (auto c: mul) {
    num[c-'0']++;
  }
  for (int i=0; i < 10; i++) {
    cout << num[i];
    if (i != 9) {
      cout << endl;
    }
  }

}