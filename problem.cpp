#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
  if (n <= 1) return false; // 1 이하의 수는 소수가 아님
  if (n <= 3) return true; // 2와 3은 소수

  if (n % 2 == 0 || n % 3 == 0) return false; // 2 또는 3으로 나누어떨어지면 소수가 아님

  for (int i = 5; i <= sqrt(n); i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
  }

  return true;
}

int main() {
  int N;
  cin >> N;

  int count = 0; // 소수의 개수를 저장할 변수

  // 2부터 N까지 모든 수에 대해 소수인지 판별
  for (int i = 2; i <= N; ++i) {
    if (isPrime(i)) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}
