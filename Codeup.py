def hanoi_tower(n, a, b, c):
    if n > 0:
        hanoi_tower(n-1, a, c, b)
        print(f"Disk {n} : {a} to {b}")
        hanoi_tower(n-1, c, b, a)

n = int(input())
hanoi_tower(n, 'A', 'C', 'B')

