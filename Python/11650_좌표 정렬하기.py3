N = int(input())
i = 0

li = [[ 0 for x in range(2)] for y in range(N)]

for _ in range(N):
  a, b = map(int, input().split())

  li[i][0] = a 
  li[i][1] = b 
  i += 1

s_li = sorted(li)

for j in range(len(s_li)):
  print(s_li[j][0], s_li[j][1])