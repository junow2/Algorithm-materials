a = 1 
b = 1 
c = 1

while a != 0 and b != 0 and c != 0: 
  num = list(map(int, input().split()))
  if num[0] == 0 and num[1] == 0 and num[2] == 0:
    break
  
  num.sort()
  if num[2]**2 == (num[0]**2) + (num[1]**2):
    print('right')
    continue
  else:
    print('wrong')
    continue