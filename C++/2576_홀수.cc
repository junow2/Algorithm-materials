#include <bits/stdc++.h>
using namespace std;

int x;
int sum_x;
int min_x = 101;

int main(void) {
    for (int i = 0; i < 7; i++) {
        cin >> x;
        if (x % 2 == 1) {
            sum_x += x;
            if ( x < min_x) { min_x = x; } 
        }
    }
    
    if (sum_x != 0) { 
        cout << sum_x << endl;
        cout << min_x;
    } else if (sum_x == 0) { cout << -1; }
}
