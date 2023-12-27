a,b,c = map(int,input().split())

sum = a
i = 1

while i<c:
    sum *= b
    i += 1

print(sum)

