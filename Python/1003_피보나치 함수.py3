memo = [0] * 100
memo[-1] = 1
memo[0] = 0
memo[1] = 1

def fibo_cnt(n):
  if n == 0:
    return 0
  elif n == 1:
    return 1
  else:
    if memo[n] != 0:
      return memo[n]
    memo[n] = fibo_cnt(n-1) + fibo_cnt(n-2)
    return memo[n]

N = int(input())
res = []

for _ in range(N):
  T = int(input())
  fibo_cnt(T)
  res.append([memo[T-1], memo[T]])

for i in res:
  print(i[0], i[1])