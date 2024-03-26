N = int(input())
count = 0
  
for i in range(N):
  word = input()
  for x in range(len(word)):
    if x != len(word)-1:
        if word[x] == word[x+1]:
            continue
        elif word[x] in word[x+1:]:
            break
    else:
      count+=1

print(count)