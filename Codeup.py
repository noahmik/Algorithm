def trans(n):
    if (n<1):
        return '0'
    elif (n==1):
        return '1'
    if (n%2==0):
        return trans(int(n/2)) + '0'
    elif (n%2==1):
        return trans(int(n/2)) + '1'

n = int(input())
answer = trans(n)
print(answer)
