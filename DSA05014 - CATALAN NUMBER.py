t = int(input())
cata = []
for i in range(0, 101): cata.append(0)
cata[0] = 1
for i in range(1, 101):
    for j in range(0, i):
        cata[i] += cata[j] * cata[i - j - 1]

while(t > 0):
    t-=1
    n = int(input())
    print(cata[n])