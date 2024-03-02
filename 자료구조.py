class Deque: #Deque 클래스 지정
    #클래스를 찍어낼 때 초기화 시키는 함수
    def __init__(self, Deque_size):
        self.Deque_size = Deque_size #Deque의 크기
        self.front = 0 #Deque의 앞쪽 위치를 가리키는 변수
        self.rear = 0 #Deque의 뒤쪽 위치를 가리키는 변수
        self.list = [None] * Deque_size #Deque에 들어갈 값들이 저장될 곳을 Duque의 크기만큼 설정해준다
    
    #Deque이 비어있는지 확인하는 함수
    def isEmpty(self):
        #front와 rear가 같다면 비어있음
        #Deque가 비어있으면 True, 아니면 False를 반환
        return self.front == self.rear
    
    #Deque이 가득 찼는지 확인하는 함수
    def isFull(self):
        #rear를 1증가시키고 Deque의 크기로 나눈 나머지가 front와 같으면 가득참
        #Deque이 가득찼으면 True, 아니면 False를 반환
        return self.front == (self.rear + 1) % self.Deque_size
    
    #Deque의 앞쪽에 값를 추가하는 함수
    def Addfront(self, item):
        #Deque가 가득 찼다면 "FULL"을 출력
        if self.isFull():
            return print("FULL")
        #Deque이 가득 차지 않았다면
        else:
            self.list[self.front] = item #front에 받은 값을 추가한다
            #front를 -1하고 Deque 크기를 더한 후 Deque의 크기로 나눈 나머지를 front에 넣는다
            self.front = (self.front - 1 + self.Deque_size) % self.Deque_size
        
    #Deque의 뒤쪽에 값를 추가하는 함수
    def Addrear(self, item):
        #Deque이 가득 찼다면 "FULL"을 출력
        if self.isFull():
            return print("FULL")
        #그렇지 않다면
        else:
            #rear를 +1한 후 Deque의 크기로 나눈 나머지를 rear에 넣는다
            self.rear = (self.rear + 1) % self.Deque_size 
            self.list[self.rear] = item #rear의 위치에 받은 값을 추가 시킨다
            
    #Deque의 앞쪽 값을 삭제하는 함수
    def Deletefront(self):
        #Deque이 비었다면 "EMPTY"를 출력
        if self.isEmpty():
            return print("EMPTY")
        #그렇지 않다면
        else:
            #front를 +1한 후 Deque의 크기로 나눈 나머지를 front에 넣는다
            self.front = (self.front + 1) % self.Deque_size
            return self.list[self.front]
    
    def Deleterear(self):
        # 덱의 뒤쪽에서 원소를 삭제함
        if self.isEmpty():
            return print("EMPTY")
        else: 
            #rear를 -1하고 Deque 크기를 더한 후 Deque의 크기로 나눈 나머지를 rear에 넣는다
            self.rear = (self.rear - 1 + self.Deque_size) % self.Deque_size
            return self.list[self.rear]
    
    #Deque의 앞쪽 값을 반환하는 함수
    def Getfront(self):
        #front 위치의 값을 반환한다
        return self.list[(self.front + 1) % self.Deque_size]
    
    #Deque의 뒤쪽 값을 반환하는 함수
    def Getrear(self):
            #rear 위치의 값을 반환한다
            return self.list[self.rear]


de = Deque(int(input("Deque의 사이즈: ")))

# 앞쪽에 원소 추가
for i in range(1, 4): #i가 1부터 4보다 작을 때까지 1씩 증가하면서 for문을 돈다
    de.AddFront(i) #i를 front에 추가한다
    print("덱 front에 {} 추가: {}".format(i,de.list)) 

# 뒤쪽에 원소 추가
for i in range(4, 6): #i가 4부터 6보다 작을 때까지 1씩 증가하면서 for문을 돈다
    de.AddRear(i) #i를 rear에 추가한다
    print("덱 rear에 {} 추가: {}".format(i,de.list))


# 앞쪽 원소 확인
print("덱 front에 원소 확인: {}".format(de.GetFront()))

# 뒤쪽 원소 확인
print("덱 rear에 원소 확인: {}".format(de.GetRear()))

# 앞쪽에서 원소 삭제
for i in range(3): #3번 for문을 돌면서 front에 있는 값을 삭제한다
    print("덱 front에서 {} 삭제: {}".format(de.DeleteFront(), de.list))

# 뒤쪽에서 원소 삭제
for i in range(2): #2번 for문을 돌면서 rear에 있는 값을 삭제한다
    print("덱 rear에서 {} 삭제: {}".format(de.DeleteRear(), de.list))