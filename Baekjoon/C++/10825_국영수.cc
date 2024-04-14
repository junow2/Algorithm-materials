#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

struct person {

  string name;
  int kor, eng, math;
};

bool cmp(person a, person b) {
  
  bool k = false, e = false, m = false; 
  if (a.kor == b.kor) k = true;
  if (a.eng == b.eng) e = true;
  if (a.math == b.math) m = true;

  if (k) {
    if (e) {
      if (m) return a.name < b.name; 
      return a.math > b.math;
    } 
    return a.eng < b.eng; 
  } 
  
  return a.kor > b.kor;
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int N; 
  cin >> N; 
  vector <person> v(N); 
  for (int i=0; i<N; i++) 
    cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;

  sort(v.begin(), v.end(), cmp); 

  for (auto i: v) cout << i.name << endl; 
}