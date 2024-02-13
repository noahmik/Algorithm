//2. 자연수의 합
//자연수 A,B가 주어지면 A부터 B까지의 합을 수식과 함께 출력하세요
//입력; 첫줄에 자연수 A,B 공백으로 입력 (1<=A<=B<=100)
//출력; 첫줄에 수식과 함께 합을 출력합니다
//입력예제1 ; 3 7 출력예제; 3+4+5+6+7 = 25

#include <iostream>

int main(){
  int A,B,C;
  std::cin >> A >> B;
  C = A;
  std::cout << A;
  for(int i=A+1;i<=B;i++){
    std::cout << "+";
    std::cout << i;
    C += i;
  }
  std::cout << " = " << C;
}
