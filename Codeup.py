pasta = [int(input()) for _ in range(3)]
juice = [int(input()) for _ in range(2)]
mini = min(pasta) + min(juice)

print(f'{mini*1.1:.1f}')
