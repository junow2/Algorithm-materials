import sys

def check(n, cnt):
  if len(n) >= 2: 
    t = 0 
    for i in n: 
      t += int(i) 
      
    return check((str(t)), cnt+1)

  else:
    print(cnt)
    if int(n) % 3 == 0:
      print('YES')
    else:
      print('NO')

    return ''

X = sys.stdin.readline().strip()
print(check(X, 0))