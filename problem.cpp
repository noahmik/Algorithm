#include <iostream>
#include <queue>
#include <cmath>

int main() {
  int N;
  std::cin >> N;

  // 우선순위 큐를 선언
  std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;

  for (int i = 0; i < N; ++i) {
    int x;
    std::cin >> x;

    // 정수 x를 입력받고, 0이 아니라면 우선순위 큐에 삽입
    if (x != 0) {
      pq.push({abs(x), x});
    } else {
      // 정수가 0이라면 우선순위 큐에서 가장 작은 값을 출력
      if (pq.empty()) {
        std::cout << "0\n";
      } else {
        std::cout << pq.top().second << "\n";
        pq.pop();
      }
    }
  }

  return 0;
}
