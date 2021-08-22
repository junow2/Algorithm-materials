T = int(input())

for i in range(T):
  H, W, N = map(int, input().split())
  X = N
  cnt = 1 

  while X > H: 
    cnt += 1 
    X -= H

  X = str(X)

  if cnt >= 10:
    cnt = str(cnt)
  else:
    cnt = '0' + str(cnt)

  print( X + cnt)  