import sys

N = int(sys.stdin.readline())
A = []

for i in range(N):
  i = int(sys.stdin.readline())
  A.append(i)

A.sort()

for x in range(N):
  print(A[x])