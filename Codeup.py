inputNumber = int(input())
temp = inputNumber
digit = 0
rem = 0
sum = 0

while temp > 0:
    digit += 1
    temp //= 10

digit2 = digit

for i in range(digit):
    if inputNumber % 10 == 0:
        digit2 -= 1
        inputNumber //= 10
    else:
        result = inputNumber
        for i in range(digit2):
            rem = result % 10
            result //= 10
            sum += rem
            print(rem, end="")
        print()
        print(sum)
        break


