class Deque: #Deque 클래스 지정
    #클래스를 찍어낼 때 초기화 시키는 함수
    def __init__(self, Deque_size): 
        self.Deque_size = Deque_size #Deque의 크기
        self.front = -1  #Deque의 앞쪽 위치를 가리키는 변수
        self.rear = self.Deque_size #Deque의 뒤쪽 위치를 가리키는 변수
        self.list = [None]*Deque_size  #Deque에 들어갈 값들이 저장될 곳을 Duque의 크기만큼 설정해준다
    
    #Deque이 비어있는지 확인하는 함수
    def isEmpty(self): 
        #rear가 Deque의 크기와 같고 front가 -1이면 즉, 초기값이면 비어있다
        #Deque가 비어있으면 True, 아니면 False를 반환
        return self.rear == self.Deque_size and self.front == -1 
    
    #Deque이 가득 찼는지 확인하는 함수
    def isFull(self): 
        #front가 Deque의 크기-1 즉, 리스트의 마지막 인덱스이거나 rear가 0이면 가득참
        #Deque이 가득찼으면 True, 아니면 False를 반환
        return self.front == self.Deque_size-1 or self.rear == 0 
    
    #Deque의 앞쪽에 값를 추가하는 함수
    def AddFront(self, item): 
        #Deque이 가득 찼다면 "FULL"을 출력
        if self.isFull(): 
            return print("FULL")
        #Deque이 가득 차지 않았다면
        else: 
            self.front += 1 #front를 1증가 시키고
            self.list[self.front] = item  #front가 증가된 인덱스 위치에 값을 추가한다
        
    #Deque의 앞쪽 값을 삭제하는 함수
    def DeleteFront(self): 
        #Deque가 비었다면 "EMPTY"를 출력
        if self.isEmpty():
            return print("EMPTY")
        #그렇지 않다면
        else:
            data = self.list[self.front] #data에 front에 있는 값을 넣는다
            self.list[self.front] = None #front에 값을 None으로 바꾼다
            self.front -= 1 #front를 1감소시킨다
            
            return data #삭제한 값을 반환한다
    
    #Deque의 앞쪽 값을 반환하는 함수
    def GetFront(self): 
        #front 위치의 값을 반환한다
        return self.list[self.front] 
    
    #Deque의 뒤쪽에 값을 추가하는 함수
    def AddRear(self, item): 
        #Deque이 가득 찼다면
        if self.isFull():
            #"FULL"을 출럭
            return print("FULL")
        #그렇지 않다면
        else:
            #rear를 한 칸 뒤로 이동시키고
            self.rear -= 1
            #거기에 받은 값을 추가한다
            self.list[self.rear] = item
    
    #Deque의 뒤쪽 값을 삭제하는 함수
    def DeleteRear(self): 
        #Deque이 비어있다면
        if self.isEmpty():
            return print("EMPTY") #"EMPTY"를 출력
        #그렇지 않다면
        else:
            data = self.list[self.rear] #data에 rear에 있는 값을 넣는다 
            self.list[self.rear] = None #rear에 값을 None으로 바꾼다
            self.rear += 1 #rear를 1증가시킨다
            return data #삭제한 값을 반환한다
    
    #Deque의 뒤쪽 값을 반환하는 함수
    def GetRear(self): 
        #rear 위치의 값을 반환한다
        return self.list[self.rear] 
    
de = Deque(int(input("덱의 사이즈를 입력하시오: ")))

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