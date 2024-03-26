import sys
input = sys.stdin.readline

N = int(input())
res = 0

for i in range(1, N+1): 
  check = list(map(int, str(i)))
  if N == sum(check) + i:
    if res == 0:
      res = i
    
    if i < res:
      res = i

if res == 0:
  print(0)
else:
  print(res)