N = int(input())
M = input()
S = 0 

M = list(M)
M = [ int(x) for x in M ]

for i in M:
  S += i

if N == len(M):
  print(S)
else:
  pass