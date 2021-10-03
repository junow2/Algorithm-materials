N = int(input())
word_list = []

for _ in range(N):
  word = input()
  if word not in word_list:
    word_list.append(word)
  
li_ord = sorted(word_list, key = lambda x: (len(x), x))

for ord_word in li_ord:
  print(ord_word)