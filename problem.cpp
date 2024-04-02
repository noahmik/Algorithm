#include <iostream>

using namespace std;

// 주어진 num이 정답 answer와 일치하는지 확인하는 함수
bool is_correct(int num, int answer) {
  // 1부터 num까지의 합을 구함
  int sum = num * (num + 1) / 2;

  // 정답과 계산된 합이 일치하는지 확인 후 반환
  if (sum == answer) {
    return true;
  }

  // 정답이 아니라면 false 반환
  return false;
}

// 문제를 해결하는 함수
void solve(int N) {
  // 종료 조건: N이 0이 되면 함수 종료
  if (N == 0) {
    return;
  }

  int card, answer;
  cin >> card >> answer;

  // 정답 여부 확인 후 출력
  if (is_correct(card, answer)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  // 다음 입력을 처리하기 위해 재귀 호출
  solve(N - 1);
}

int main() {
  int N;
  cin >> N;

  // 문제 해결 함수 호출
  solve(N);

  return 0;
}
