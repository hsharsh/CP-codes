s =  raw_input()
S = []
for i in range(len(s)):
    if s[i].islower():
        S.append(s[i].upper())
    elif s[i].isupper():
        S.append(s[i].lower())
    else:
        S.append(s[i])
print ''.join(S)
