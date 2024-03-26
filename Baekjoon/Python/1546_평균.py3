N = int(input())
M = list(map(int, input().split()))

if N == len(M): 
  m = max(M)

  M = [ x/m*100 for x in M ]


  print(sum(M)/len(M))