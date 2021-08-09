A, B = map(list, input().split())

R_A = ''.join(reversed(A))
R_B = ''.join(reversed(B))

if int(R_A) > int(R_B):
  print(R_A)
else:
  print(R_B) 