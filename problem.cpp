#include <iostream>
#include <stack>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> sequence(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> sequence[i];
  }

  std::stack<int> s;
  std::vector<char> operations;
  int current = 1;

  for (int i = 0; i < n; ++i) {
    int num = sequence[i];

    // 현재 숫자보다 작거나 같은 숫자까지 스택에 push
    while (current <= num) {
      s.push(current);
      operations.push_back('+');
      ++current;
    }

    // 스택의 top이 현재 숫자와 같은지 확인
    if (s.top() == num) {
      s.pop();
      operations.push_back('-');
    } else {
      std::cout << "NO\n";
      return 0;
    }
  }

  // 모든 연산을 출력
  for (char op : operations) {
    std::cout << op << "\n";
  }

  return 0;
}
