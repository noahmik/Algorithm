n = int(input())
students = list(map(int, input().split()))

rank = sorted(students, reverse=True)

for i in range(n):
    a = rank.index(students[i])
    print(students[i], a+1)
