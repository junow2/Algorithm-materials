N = int(input())

gnList = input().split()
pnList = [ int(x) for x in gnList]
cnt = 0
check = 0

for i in range(N):
  if pnList[i] == 1:
    cnt -= 1
  for j in range(2, pnList[i]):
    if pnList[i] % j == 0: # 나머지가 0이다 = 소수가 아니다.
      check += 1
  if check == 0:
    cnt += 1 
  
  check = 0  
  
print(cnt)