def 최대공약수(a,b,c):
  max = 0
  for i in range(1,a + 1):
     if a % i == 0 and b % i == 0 and c % i ==0:
        max = i
  return max

a,b,c = map(int,input().split())
print(최대공약수(a,b,c))
