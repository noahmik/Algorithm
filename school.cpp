//3. 진약수의 합
//자연수 N이 주어지면 자연수 N의 진약수의 합을 수식과 함께 출력하는 프로그램

//입력; 첫 줄에 자연수 N이 주어집니다 3<N<100
//출력; 첫 줄에 더하는 수식과 함께 합을 출력합니다.


#include <iostream>
#include <string>

int main() {
  int N;
  std::cout << "자연수 N을 입력하세요: ";
  std::cin >> N;

  int sum = 0;
  std::string equation;
  for (int i = 2; i < N; i++) {
    if (N % i == 0) {
      sum += i;
      equation += std::to_string(i) + "+";
    }
  }

  equation = equation.substr(0, equation.length() - 1); // 마지막 "+" 제거
  std::cout << equation << " = " << sum << std::endl;

  return 0;
}

