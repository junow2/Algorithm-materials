N = int(input())

for _ in range(N):
  ori, ran = input().split()
  ori = sorted(ori)
  ran = sorted(ran)

  if len(ori) != len(ran):
    print("Impossible")
    continue
  
  else:
    for i in range(len(ori)):
      if ori[i] != ran[i]:
        check = False
        break
      else:
        check = True
    
    if check:
      print("Possible")
    else:
      print("Impossible")