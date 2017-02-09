n = int(input())
S = []
Min = 101
sn = []
smin = 101
count = 0
for i in range(n):
    name = str(raw_input())
    marks = float(input())
    if Min > marks:
        Min = marks
    L = []
    L.append(name)
    L.append(marks)
    S.append(L)

for i in range(n):
    if smin > S[i][1] and S[i][1] != Min:
        smin = S[i][1]

for i in range(n):
    if smin == S[i][1]:
        sn.append(S[i][0])
        count = count + 1

sn.sort();

for i in range(count):
    print sn[i]
