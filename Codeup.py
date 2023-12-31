a = int(input())

def cir(num):
    if num == 1:
        return 1
        
    return num*cir(num-1)

print(cir(a))
