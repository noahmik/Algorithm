n, c = map(int, input().split())
students = list(map(int, input().split()))

students.sort()

for i in range(0, int(n/c)+1):
    for j in range(i*c, i*c+c):
        if j >= len(students):
            break
        print(students[j], end=' ')
    print()