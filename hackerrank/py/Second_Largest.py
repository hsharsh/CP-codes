N = int(input())
A = []
Max = -101
B = map(int,raw_input().split())
for i in range(0,N):
    A.append(B[i])
    if A[i]>Max:
        Max=A[i]
max2 = -101
for i in range(0,N):
    if (A[i]>max2 and A[i]!=Max):
        max2=A[i]
print max2
