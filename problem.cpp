#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
//자연수 n이 소수인지 판별할 때 for문은 n의 ‘제곱근’까지만 반복한다.

int reverse(int x) {
  int reversed = 0;
  while (x > 0) {
    int digit = x % 10;
    reversed = reversed * 10 + digit;
    x /= 10;
  }
  return reversed;
}

bool isPrime(int x) {
  if (x <= 1) return false;
  if (x == 2) return true;
  if (x % 2 == 0) return false;

  for (int i = 3; i <= sqrt(x); i += 2) {
    if (x % i == 0) return false;
  }

  return true;
}

int main() {
  int N;
  cin >> N;

  vector<int> numbers(N);
  for (int i = 0; i < N; ++i) {
    cin >> numbers[i];
  }

  for (int i = 0; i < N; ++i) {
    int reversed = reverse(numbers[i]);
    if (isPrime(reversed)) {
      cout << reversed << " ";
    }
  }
  cout << endl;

  return 0;
}