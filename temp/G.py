from math import sqrt

n = int(input())
pos = []

for i in range(1, n+1):
    tmp = sqrt(i*i+n)
    tm2 = int(tmp)
    if tmp == float(tm2):
        pos.append(tm2)

print(len(pos))

for i in range(len(pos)):
    if i+1 == len(pos):
        print(pos[i])
    else:
        print(pos[i], end=" ")
