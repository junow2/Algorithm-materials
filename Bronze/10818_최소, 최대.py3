N = int(input())
A = input().split()

A = [int(a) for a in A]

if N == len(A):
  print(min(A), max(A)) 