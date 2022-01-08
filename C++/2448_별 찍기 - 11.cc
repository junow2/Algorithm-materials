#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

char board[10000][10000];   

void draw(int x, int y) {
  board[x][y] = '*'; 
  board[x+1][y-1] = '*'; board[x+1][y+1] = '*';

  for (int i=y-2; i < y+3; i++) board[x+2][i] = '*';
}

void star(int x, int y, int n) {
  if (n==3) {
    draw(x, y); return;
  }

  int s = n / 2; 
  star(x, y, s); star(x+s, y-s, s); star(x+s, y+s, s);
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  
  int n; cin >> n;
  for (int i=0; i < n*2; i++) 
    fill(board[i], board[i]+n, ' ');

  star(0, n-1, n); 

  for (int i=0; i < n; i++) {
    for (int j=0; j < 2*n-1; j++) {
      if (board[i][j] == '*') cout << '*';
      else cout << ' ';
    } cout << endl; 
  } 
} 