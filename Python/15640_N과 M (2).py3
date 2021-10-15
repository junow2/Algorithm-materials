N, M = map(int, input().split())
s = []

def func(key):
  if len(s) == M:
    for x in s:
      print(x, end=' ')
    print('')
    return 

  for i in range(key, N+1):
    if i not in s:
      s.append(i)
      func(i+1)
      s.pop()

func(1)