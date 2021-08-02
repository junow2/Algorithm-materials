H, M = input().split()
H = int(H)
M = int(M)


if 0 <= H <= 23 and 0 <= M <= 59: 
  if M - 45 >= 0:
    print(H, M - 45)
  elif M - 45 < 0: 
    if H - 1 >= 0:
      print(H - 1, M + 60 - 45)
    elif H - 1 < 0:
      print(H + 24 -1, M + 60 - 45)