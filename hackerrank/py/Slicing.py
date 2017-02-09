s =  raw_input()
S = raw_input()
pos,replace= tuple(S.split())
print s[:int(pos)] + replace + s[int(pos)+1:]
