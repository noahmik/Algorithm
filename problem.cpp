#include <iostream>
#include <string>
#include <vector>

using namespace std;

int count_valid_passwords(const string& S, int P, const vector<int>& min_counts) {
  int count = 0;
  vector<int> counts(4, 0); // A, C, G, T의 개수를 저장하는 배열
  int start = 0; // 윈도우 시작 인덱스
  int end = 0; // 윈도우 끝 인덱스

  // 초기 윈도우 설정
  for (end = 0; end < P; ++end) {
    char c = S[end];
    if (c == 'A') counts[0]++;
    else if (c == 'C') counts[1]++;
    else if (c == 'G') counts[2]++;
    else if (c == 'T') counts[3]++;
  }

  while (end <= S.length()) {
    // 현재 윈도우가 조건을 만족하는지 확인
    bool valid = true;
    for (int i = 0; i < 4; ++i) {
      if (counts[i] < min_counts[i]) {
        valid = false;
        break;
      }
    }
    if (valid) count++; // 조건을 만족하는 경우 카운트 증가

    // 다음 윈도우로 이동
    char start_char = S[start];
    if (start_char == 'A') counts[0]--;
    else if (start_char == 'C') counts[1]--;
    else if (start_char == 'G') counts[2]--;
    else if (start_char == 'T') counts[3]--;

    if (end < S.length()) {
      char end_char = S[end];
      if (end_char == 'A') counts[0]++;
      else if (end_char == 'C') counts[1]++;
      else if (end_char == 'G') counts[2]++;
      else if (end_char == 'T') counts[3]++;
    }

    start++;
    end++;
  }

  return count;
}

int main() {
  int N, P;
  cin >> N >> P; // DNA 문자열의 길이와 부분문자열의 길이 입력 받기

  string S;
  cin >> S; // DNA 문자열 입력 받기

  vector<int> min_counts(4); // A, C, G, T의 최소 등장 횟수를 저장하는 배열
  for (int i = 0; i < 4; ++i) {
    cin >> min_counts[i]; // 최소 등장 횟수 입력 받기
  }

  int result = count_valid_passwords(S, P, min_counts); // 가능한 비밀번호의 종류 수 계산
  cout << result << endl; // 결과 출력

  return 0;
}
