N, M = map(int, input().split())
Card = list(map(int, input().split()))
tmp = 0

for a in Card:
  for b in Card:
    if b != a:
      for c in Card:
        if c != b and c != a:
          if a + b + c <= M:
            i = a + b + c 
            if i > tmp:
              tmp = i
              
print(tmp)  