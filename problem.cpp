#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> abilities(N);
  vector<int> ranks(N, 1);

  for (int i = 0; i < N; ++i) {
    cin >> abilities[i];
  }

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < i; ++j) {
      if (abilities[j] > abilities[i]) {
        ranks[i]++;
      }
    }
  }

  for (int i = 0; i < N; ++i) {
    cout << ranks[i] << " ";
  }

  return 0;
}
