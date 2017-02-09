n = int(input())
A = []
while n:
    ar = raw_input()
    arg = ar.strip().split(" ")
    if arg[0] == "insert":
        A.insert(int(arg[1]),int(arg[2]))
    if arg[0] == "append":
        A.append(int(arg[1]))
    if arg[0] == "print":
        print(A)
    if arg[0] == "sort":
        A.sort()
    if arg[0] == "remove":
        A.remove(int(arg[1]))
    if arg[0] == "pop":
        A.pop()
    if arg[0] == "reverse":
        A.reverse()
    if arg[0] == "count":
        A.count(arg[1])
    n = n-1
