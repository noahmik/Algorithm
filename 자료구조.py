class CircularQueue:
    def __init__(self, capacity=5):
        self.capacity = capacity  # 큐의 최대 용량 설정
        self.list = [None] * capacity  # 큐를 표현하는 리스트
        self.front = 0  # 큐의 시작 위치
        self.rear = 0  # 큐의 마지막 요소 다음 위치

    def isEmpty(self):
        return self.front == self.rear  # 큐가 비어있는지 확인

    def isFull(self):
        return (self.rear + 1) % self.capacity == self.front  # 큐가 가득 찼는지 확인

    def enqueue(self, item):
        if self.isFull():
            print("큐가 가득 찼습니다.")
            return False
        self.list[self.rear] = item  # rear 위치에 요소 추가
        self.rear = (self.rear + 1) % self.capacity  # rear 위치 업데이트
        return True

    def dequeue(self):
        if self.isEmpty():
            print("큐가 비어있습니다.")
            return None
        item = self.list[self.front]  # front 위치의 요소 추출
        self.list[self.front] = None  # front 위치의 요소 삭제
        self.front = (self.front + 1) % self.capacity  # front 위치 업데이트
        return item

    def peek(self):
        if self.isEmpty():
            return None
        return self.list[self.front]  # front 위치의 요소 반환