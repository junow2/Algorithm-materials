SL = input().split() 
L = [ int(x) for x in SL ]

if L[2] <= L[1]:
  print(-1) 
else:
  k = L[0] / ( L[2] - L[1] )
  k += 1
  print(int(k))