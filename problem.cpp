#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> data(N);
  for (int i = 0; i < N; ++i) {
    cin >> data[i];
  }

  int max_alarm = 0; // 최대 연속 경보음이 울린 시간
  int current_alarm = 0; // 현재 연속 경보음이 울린 시간

  for (int i = 0; i < N; ++i) {
    if (data[i] > M) {
      current_alarm++; // 경보음이 울리는 동안 시간을 증가시킴
    } else {
      max_alarm = max(max_alarm, current_alarm); // 최대 연속 경보음 갱신
      current_alarm = 0; // 경보음이 울리지 않으면 연속 경보음 시간 초기화
    }
  }

  // 마지막으로 측정된 값이 경보음일 경우를 고려하여 최대 연속 경보음 갱신
  max_alarm = max(max_alarm, current_alarm);

  if (max_alarm > 0) {
    cout << max_alarm << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;
}
