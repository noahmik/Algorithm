#include <iostream>
#include <vector>

using namespace std;

vector<int> count(int n) {
  vector<int> counts(n + 1, 0); // 각 숫자의 약수 개수를 저장할 벡터 초기화

  for (int i = 1; i <= n; ++i) {
    for (int j = i; j <= n; j += i) {
      counts[j]++; // j의 약수의 개수 증가
    }
  }

  return counts;
}

int main() {
  int N;
  cin >> N;

  vector<int> counts = count(N);

  for (int i = 1; i <= N; ++i) {
    cout << counts[i] << " ";
  }
  cout << endl;

  return 0;
}
