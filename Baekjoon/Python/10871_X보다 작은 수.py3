N, X = input().split()
A = input().split()

N = int(N)
X = int(X)

if len(A) == N:
  for a in A:
    if int(a) < X:
      print(int(a), end=" ")
else:
  None