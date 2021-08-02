n = int(input())
result = 0

if 1 <= n <= 10000:
  for n in range(1, n+1):
    result += n

print(result)