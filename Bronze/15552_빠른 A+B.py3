import sys
 
T = int(sys.stdin.readline().rstrip())  
for T in range(1, T+1):
    A, B = sys.stdin.readline().split()

    A = int(A)
    B = int(B)
    
    print(A + B)