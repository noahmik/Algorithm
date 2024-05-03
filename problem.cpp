#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false); // C++의 입출력 스트림과 C의 입출력 버퍼를 동기화하지 않음
  cin.tie(NULL); // cin과 cout이 번갈아가며 사용될 때의 성능을 향상시킴
  cout.tie(NULL); // cin과 cout이 번갈아가며 사용될 때의 성능을 향상시킴

  int N, M, A, B;
  cin >> N >> M;
  vector<int> sum(N + 1, 0);

  // 합 배열
  for (int i = 1; i <= N; i++) {
    int num;
    cin >> num;
    sum[i] = sum[i - 1] + num;
  }

  for (int j = 1; j <= M; j++) {
    cin >> A >> B;
    int result = sum[B] - sum[A - 1];
    cout << result << '\n';
  } //endl 함수는 개행만 해주는 것이 아닌 내부 버퍼를 비워주는 역할도 함께 => 매우느림

  return 0;
}