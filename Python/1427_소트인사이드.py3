N = input()
li = [ int(x) for x in sorted(N) ]
li_rev = reversed(li)

for n in li_rev:
  print(n, end="") 