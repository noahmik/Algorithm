a, b, c = map(int, input().split())

if a <= b and a <= c:
    if c <= b:
        print(a, c, b)
    else:
        print(a, b, c)
elif b <= a and b <= c:
    if a <= c:
        print(b, a, c)
    else:
        print(b, c, a)
else:
    if a <= b:
        print(c, a ,b)
    else:
        print(c ,b ,a)

