#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> scores(N);
  vector<int> ranks(N, 1);

  for (int i = 0; i < N; ++i) {
    cin >> scores[i];
  }

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (scores[i] < scores[j]) {
        ranks[i]++;
      }
    }
  }

  for (int i = 0; i < N; ++i) {
    cout << ranks[i] << " ";
  }

  return 0;
}
