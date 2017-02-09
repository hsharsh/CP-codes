t1, t2, n = map(int, input().split())
def go(t1,t2,n):
    number = t1 + t2*t2
    if n==3:
    	print(number)
    	exit(0)
    n = n-1
    go(t2,number,n)

go(t1,t2,n)