//1. 1부터 N까지 M의 배수합
//자연수 N이 입력되면 1부터 N까지의 수 중 M의 배수합을
// 출력하는 프로그램을 입력하시오

//입력; 첫 줄에 N과 M이 차례로 입력 (3<=M<N=1000)
//첫 줄에 M의 배수합을 출력한다
//입력예제 15,3 출력예제 45

#include <iostream>

int main() {
  int N, M;
  std::cin >> N >> M; // N과 M을 입력받는다.

  int sum = 0; // 배수의 합을 저장할 변수 초기화

  for(int i = 1; i <= N; i++) {
    if(i % M == 0) { // i가 M의 배수인 경우
      sum += i; // sum에 i를 더한다.
    }
  }

  std::cout << sum; // M의 배수의 총 합을 출력한다.
  return 0;
}

