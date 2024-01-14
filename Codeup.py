def mysubstr(word,start,count):
    for i in range(count):
        print(word[start+i],end='')
w=input()
s,c=map(int,input().split())
mysubstr(w,s,c)
