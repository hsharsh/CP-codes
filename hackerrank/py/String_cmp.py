s =  list(raw_input())
sub = list(raw_input())
count = 0
for i in range(len(s)):
    flag = 1
    if s[i] == sub[0]:
        for j in range(len(sub)):
            if j+i >=len(s):
                flag = 0
                break
            if s[j+i] != sub[j]:
                flag = 0
        if flag:
            count = count + 1
print count
