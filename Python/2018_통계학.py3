import sys
from collections import Counter

N = int(sys.stdin.readline())
SL = []
for _ in range(N): 
  SL.append(int(sys.stdin.readline()))

SL = sorted(SL)

# 산술평균 : N개의 수들의 합을 N으로 나눈 값 
print( round(sum(SL) / N) )

# 중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
print(SL[N//2])

# 최빈값 : N개의 수들 중 가장 많이 나타나는 값
cnt = Counter(SL)
cnt_li = Counter(SL).most_common()
if len(cnt_li) > 1 and cnt_li[0][1]==cnt_li[1][1]: #최빈값 2개 이상
    print(cnt_li[1][0])
else:
    print(cnt_li[0][0])

# 범위 : N개의 수들 중 최댓값과 최솟값의 차이
print( max(SL) - min(SL) )