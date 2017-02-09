x, y, z, N = int(input()),int(input()),int(input()),int(input())
X, Y, Z = [i for i in range(x+1)], [i for i in range(y+1)], [i for i in range(z+1)]
L=[]
for i in X:
    for j in Y:
        for k in Z:
            if( i+j+k != N):
                l = []
                l.append(i)
                l.append(j)
                l.append(k)
                L.append(l)
print L
