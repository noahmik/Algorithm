#include <iostream>

using namespace std;

int countDigits(int num) {
  int count = 0;
  int base = 1;
  int result = 0;

  while (num / base > 0) {
    int digit = (num / base) % 10; // 현재 자리의 숫자
    result += digit * count; // 현재 자리의 숫자가 등장하는 횟수를 더함
    if (digit > 1) {
      result += base;
    } else if (digit == 1) {
      result += num % base + 1; // 현재 자리의 숫자가 1인 경우, 나머지 자릿수를 더함
    }
    base *= 10;
    count++;
  }

  return result;
}

int main() {
  int N;
  cin >> N;

  cout << countDigits(N) << endl;

  return 0;
}
