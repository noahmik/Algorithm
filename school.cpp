#include <iostream>
#include <vector>

using namespace std;

int digit_sum(int x) {
  int sum = 0;
  while (x > 0) {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}

int main() {
  int N;
  cin >> N;

  vector<int> numbers(N);
  for (int i = 0; i < N; ++i) {
    cin >> numbers[i];
  }

  int max_sum = 0;
  int max_number = 0;

  for (int i = 0; i < N; ++i) {
    int sum = digit_sum(numbers[i]);
    if (sum > max_sum || (sum == max_sum && numbers[i] > max_number)) {
      max_sum = sum;
      max_number = numbers[i];
    }
  }

  cout << max_number << endl;

  return 0;
}