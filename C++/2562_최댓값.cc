#include <bits/stdc++.h>
using namespace std;

int arr[9];

int main(void) {
    for (int n = 0; n < 9; n++) {
        cin >> arr[n];
    }
    cout << *max_element(arr, arr+9) << endl;

    for (int m = 0; m < 9; m++) {
        if ( arr[m] == *max_element(arr, arr+9) ) { cout << m+1; }
    }
     
}
