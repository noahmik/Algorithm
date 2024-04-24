#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  int count = 0; // 가짓수
  int sum = 0; // 연속된 자연수의 합
  int start = 1; // 시작 자연수
  for (int end = 1; end <= N; ++end) {
    sum += end; // 연속된 자연수 추가
    while (sum > N) { // 합이 N을 초과하면 시작 자연수를 증가시킴
      sum -= start++;
    }
    if (sum == N) { // 합이 N이면 가짓수 증가
      count++;
    }
  }

  cout << count << endl;

  return 0;
}
