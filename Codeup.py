change = int(input())
count = 0
while change:
  if change >= 50000:
    change -= 50000
    count +=1
  elif change >= 10000:
    change -= 10000
    count +=1
  elif change >= 5000:
    change -= 5000
    count +=1
  elif change >= 1000:
    change -= 1000
    count +=1
  elif change >= 500:
    change -= 500
    count +=1
  elif change >= 100:
    change -= 100
    count +=1
  elif change >= 50:
    change -= 50
    count +=1
  elif change >= 10:
    change -= 10
    count +=1

print(count)
