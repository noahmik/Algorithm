class Stack():
    def __init__(self, Stack_Size):
        self.top = -1  # 스택의 가장 위를 가리키는 인덱스
        self.Stack_Size = Stack_Size  # 스택의 크기
        self.list = [None]  # 스택을 저장할 리스트

    def isEmpty(self):
        return self.top == -1  # 스택이 비어있는지 확인

    def isFull(self):
        return self.top == self.Stack_Size - 1  # 스택이 가득 찼는지 확인

    def push(self, data):
        if(self.isFull()):  # 스택이 가득 찼을 경우
            print("스택이 가득 찼습니다")
            return None
        self.top += 1  # top 인덱스를 증가시키고
        self.list[self.top] = data  # 해당 위치에 데이터를 저장합니다.

    def pop(self):
        if(self.isEmpty()):  # 스택이 비어있을 경우
            print("스택이 비었습니다")
            return None
        data = self.list[self.top]  # top 위치의 데이터를 가져옵니다.
        self.top -= 1  # top 인덱스를 감소시킵니다.
        return data  # 가져온 데이터를 반환합니다.

    def peek(self):
        if(self.isEmpty()):  # 스택이 비어있을 경우
            print("스택이 비었습니다")
            return None
        return self.list[self.top]  # top 위치의 데이터를 반환합니다.


def precedence(op):
    if op == '(' or op == ')':
        return 0  # 괄호의 우선순위는 가장 낮습니다.
    elif op == '+' or op == '-':
        return 1  # 덧셈과 뺄셈의 우선순위는 낮습니다.
    elif op == '*' or op == '/':
        return 2  # 곱셈과 나눗셈의 우선순위는 높습니다.
    else:
        return -1  # 연산자가 아닌 경우


# 중위표기 -> 후위표기로 바꾸는 함수
def Infix2Postfix(expr):
    s = Stack(int(input("Stack의 크기: ")))  # 스택 객체를 생성합니다.
    output = []  # 후위표기식을 저장할 리스트

    for data in expr:
        if data in '(':
            s.push('(')  # 여는 괄호를 스택에 push합니다.
        elif data in ')':
            while not s.isEmpty():
                op = s.pop()
                if op == '(':
                    break  # 닫는 괄호를 만날 때까지 스택에서 pop하여 출력합니다.
                else:
                    output.append(op)
        elif data in "+-*/":
            while not s.isEmpty():
                op = s.peek()
                if precedence(op) >= precedence(data):
                    output.append(op)
                    s.pop()
                else:
                    break  # 스택의 연산자의 우선순위가 현재 연산자보다 높거나 같을 때까지 pop합니다.
            s.push(data)  # 현재 연산자를 스택에 push합니다.
        else:
            output.append(data)  # 피연산자는 바로 출력 리스트에 추가합니다.

    while not s.isEmpty():
        output.append(s.pop())  # 스택에 남아있는 모든 연산자를 출력 리스트에 추가합니다.

    return output


a = list(input("수식을 입력하시오: "))  # 수식을 리스트로 입력받습니다.
b = Infix2Postfix(a)  # 중위표기식을 후위표기식으로 변환합니다.
print("입력한 수식의 후위표기식은 {}입니다.".format(*b))  # 후위표기식을 출력합니다.