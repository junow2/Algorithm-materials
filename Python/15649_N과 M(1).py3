import itertools
N, M = map(int, input().split())

num = [ str(x) for x in range(1, N+1) ]
p = itertools.permutations(num, M)

for i in p:
  for n in i:
    print(n, end=' ')
  print('')