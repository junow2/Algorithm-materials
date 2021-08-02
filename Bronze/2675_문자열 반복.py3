T = int(input())
for k in range(T):
  S, R = input().split()

  S = int(S)
  XR = ['A', 'B', 'C']
  SR = [ x for x in R ] 
  LS = len(SR)

  for x in range(LS):
      print(SR[x] * S, end = '')
  print("")