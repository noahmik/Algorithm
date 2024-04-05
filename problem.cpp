#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> heights(N);
  for (int i = 0; i < N; ++i) {
    cin >> heights[i];
  }

  int anger_inducers = 0; // 분노 유발자 수
  int max_height = heights[N - 1]; // 가장 뒤에 있는 학생의 키

  // 뒤에서부터 순회하며 분노 유발자인지 확인
  for (int i = N - 2; i >= 0; --i) {
    if (heights[i] > max_height) {
      anger_inducers++; // 분노 유발자인 경우 수를 증가
      max_height = heights[i]; // 가장 큰 키를 갱신
    }
  }

  cout << anger_inducers << endl;

  return 0;
}
