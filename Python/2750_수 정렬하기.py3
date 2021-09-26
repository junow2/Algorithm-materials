N = int(input())
A = []

for i in range(N):
  i = int(input())
  A.append(i)

A.sort()

for x in range(len(A)):
  print(A[x])