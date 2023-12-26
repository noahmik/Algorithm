class Stack:
    def __init__(self, stack_size): # 스택을 생성합니다
        self.stack = [None] * stack_size
				# 생성시 받은 매개변수(stack_size)의 값만큼 스택 공간을 생성합니다. 
        self.top = -1  # 스택의 가장 위를 나타내는 변수입니다. 초기값은 -1로 설정합니다.

    def is_empty(self):
        return self.top == -1  
				# 스택이 비어있는지 확인하기 위해 초기값인 self.top이 초기값인 -1인지 확인합니다.

    def is_full(self):
        return self.top == len(self.stack) - 1  
				# 스택이 가득 찼는지 확인하기 위해 현재위치인 self.top과 스택 전체 사이즈인 
				#	self.stack을 비교합니다.

    def push(self, item):
        if self.is_full():  # 스택이 가득 찼을 경우 오류 메시지를 출력합니다.
            print("스택이 가득 찼습니다")
        else:
            self.top += 1  # 스택의 가장 위를 한 칸 올립니다.
            self.stack[self.top] = item  # 스택에 새로운 요소를 추가합니다.

    def pop(self):
        if self.is_empty():  # 스택이 비어있을 경우 오류 메시지를 출력합니다.
            print("스택이 비었습니다")
        else:
            item = self.stack[self.top]  # 스택의 가장 위에 있는 요소를 가져옵니다.
            self.stack[self.top] = None  # 스택에서 해당 요소를 제거합니다.
            self.top -= 1  # 스택의 가장 위를 한 칸 내립니다.
            return item  # 제거한 요소를 반환합니다.

    def peek(self):
        if self.is_empty():  # 스택이 비어있을 경우 오류 메시지를 출력합니다.
            print("스택이 비었습니다")
        else:
            return self.stack[self.top]  # 스택의 가장 위에 있는 요소를 반환합니다.