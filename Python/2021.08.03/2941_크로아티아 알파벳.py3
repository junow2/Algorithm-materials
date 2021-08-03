word = input()
Lang_C = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
cnt = 0

#while(len(word) != 0):
for i in Lang_C:
    if i in word:
      word = word.replace(i, '*')

print(len(word))   