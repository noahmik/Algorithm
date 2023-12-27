a,b,c = map(int,input().split())
sum = 0
i = 0
j = 0
y = 0

for i in range(a):
    for j in range(b):
        for y in range(c):
            print(i,j,y)
            sum += 1

print(sum)

