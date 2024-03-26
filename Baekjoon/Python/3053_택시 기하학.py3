import math
pi = math.pi

def uclid(n):
  uclid_r = pi * (n**2)
  return f'{uclid_r:6f}'

def taxi(n):
  taxi_r = 2 * (n**2) 
  return f'{taxi_r:6f}'

N = int(input())

print(uclid(N))
print(taxi(N))