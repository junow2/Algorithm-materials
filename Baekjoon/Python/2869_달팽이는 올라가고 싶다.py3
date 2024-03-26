A, B, V = map(int, input().split())

snail = ( V - A ) / ( A - B ) 

if ( V - A ) % (A - B) == 0: 
  pass
else:
  snail += 1 
 
print(int(snail) + 1)