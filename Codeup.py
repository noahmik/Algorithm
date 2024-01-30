def is_palindrome(num):
    # 입력받은 숫자를 뒤집은 후 더하기
    reverse_num = int(str(num)[::-1])
    sum_num = num + reverse_num
    
    # 회문인지 아닌지 판별
    if str(sum_num) == str(sum_num)[::-1]:
        return True
    else:
        return False

n = int(input())

if is_palindrome(n):
    print("YES")
else:
    print("NO")

