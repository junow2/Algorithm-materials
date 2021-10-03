import sys

N = int(sys.stdin.readline())
i = 0

li = [[ 0 for x in range(2)] for y in range(N)]

for _ in range(N):
  a, b = map(int, sys.stdin.readline().split())

  li[i][0] = a 
  li[i][1] = b 
  i += 1

s_li = sorted(li, key = lambda x: (x[1], x[0]))

for j in range(len(s_li)):
  print(s_li[j][0], s_li[j][1])