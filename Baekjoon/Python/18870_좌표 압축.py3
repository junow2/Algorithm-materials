import sys
input = sys.stdin.readline

N = int(input())
A = list(map(int, input().split()))

A2 = sorted(list(set(A)))
Dic_A2 = {A2[i] : i for i in range(len(A2))}

for i in A: 
  print(Dic_A2[i], end = ' ')