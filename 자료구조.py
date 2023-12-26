class LinearQueue:
    def __init__(self, capacity):
        self.capacity = capacity  # 큐의 최대 용량 설정
        self.queue = [None] * capacity  # 큐를 배열로 구현
        self.front = 0  # 큐의 시작 인덱스
        self.rear = -1  # 큐의 끝 인덱스
        self.size = 0  # 현재 큐에 저장된 데이터의 개수

    def is_empty(self):
        return self.size == 0  # 큐가 비어있는지 확인

    def is_full(self):
        return self.size == self.capacity  # 큐가 가득 찼는지 확인

    def enqueue(self, data):
        if self.is_full():
            print("큐가 가득 찼습니다.") #큐가 가득찼다면 enqueue 불가능
        else:
            self.rear = (self.rear + 1) % self.capacity  # rear 값을 증가시키고, 배열의 끝에 도달하면 다시 처음으로 돌아감
            self.queue[self.rear] = data  # rear 위치에 데이터 저장
            self.size += 1  # 데이터 개수 증가

    def dequeue(self):
        if self.is_empty():
            print("큐가 비어있습니다.") #큐가 비었다면 dequeue 불가능
        else:
            data = self.queue[self.front]  # front 위치에 있는 데이터 추출
            self.front = (self.front + 1) % self.capacity  # front 값을 증가시키고, 배열의 끝에 도달하면 다시 처음으로 돌아감
            self.size -= 1  # 데이터 개수 감소
            return data

    def peek(self):
        if self.is_empty():
            print("큐가 비어있습니다.") #큐가 비었다면 peek 불가능
        else:
            return self.queue[self.front]  # front 위치에 있는 데이터 반환