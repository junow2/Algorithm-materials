while True:
  try:
    A, B = input().split()

    A = int(A)
    B = int(B)

  except EOFError:
      break


  if A > 0 and B < 10:
      print(A + B)

  else: 
      break