#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

int N; 
bool cmp(string a, string b) {

  int al = a.length(), bl = b.length();

  if (al != bl) 
    return (al > bl) ? false : true; 

  int sum1 = 0, sum2 = 0;
  for (auto i: a)
    if (i >= 48 && i <= 57) sum1 += i - '0';
  for (auto i: b) 
    if (i >= 48 && i <= 57) sum2 += i - '0';

  if (sum1 != sum2) 
    return (sum1 > sum2) ? false : true;

  return (a > b) ? false : true;
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> N; string arr[N] = {};
  for (int i=0; i<N; i++) cin >> arr[i];
 
  sort(arr, arr+N, cmp);
  for (string s: arr) cout << s << endl;
}