#include <bits/stdc++.h>
using namespace std;

int arr[9];
int sum = 0;
int n;

int main(void) {
  for (int i = 0; i < 9; i++) {
    cin >> n;
    arr[i] = n;
    sum += n;
  }

  sort(arr, arr+9);

  for (int i = 0; i < 8; i++) {
      for (int j = i+1; j < 9; j++) {
        if (sum - arr[i] - arr[j] == 100) {
          for (int k = 0; k < 9; k++) {
            if (k != i && k != j) {
              cout << arr[k] << endl;
            }
          }
          return 0;
        }
    }
  }
}