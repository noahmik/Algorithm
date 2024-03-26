#include <iostream>
#include <vector>

using namespace std;

vector<int> count(int n) {
  vector<int> cs(n + 1, 0); // 각 숫자의 약수 개수를 저장할 벡터 초기화

  for (int i = 1; i <= n; ++i) {
    for (int j = i; j <= n; j += i) {
      cs[j]++; // j의 약수의 개수 증가
    }
  }

  return cs;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int N;
  cin >> N;

  vector<int> counts = count(N);

  for (int i = 1; i <= N; ++i) {
    cout << counts[i] << " ";
  }
  cout << endl;

  return 0;
}
//두 번째 반복문을 j += i로 바꾸면 i의 배수만 계산하므로 불필요한 반복이 줄어들어 시간 복잡도가 개선됨