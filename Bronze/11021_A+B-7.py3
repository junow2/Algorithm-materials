T = int(input())

for x in range(1, T+1):
  A, B = input().split()

  A = int(A)
  B = int(B)
  
  print(f"Case #{x}:", A+B)