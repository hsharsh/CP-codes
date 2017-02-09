M = int(input())
l1 = map(int,raw_input().split())
N = int (input())
l2 = map(int,raw_input().split())
A = set()
B = set()
while(M):
    A.add(l1[M-1])
    M -= 1
while(N):
    B.add(l2[N-1])
    N -= 1
C = (A.difference(B)).union(B.difference(A))
D = list(C)
D.sort()
l = len(D)
for i in range(l):
    print D[i]
