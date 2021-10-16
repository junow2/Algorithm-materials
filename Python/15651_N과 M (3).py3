N, M = map(int, input().split())
num = [ x for x in range(1, N+1) ]
s = []

def func():
  if len(s) == M:
    for x in s:
      print(x, end=' ')
    print('')
    return
  
  for i in num:
    s.append(i)
    func()
    s.pop()

func()