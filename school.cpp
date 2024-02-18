//첫 줄에 바이러스가 걸린 영어단어가 주어진다. 바이러스에 걸린 영단어의 길이는 100을
//넘지 않는다. 문자 사이의 공백은 연속적으로 존재할 수 있다. 입력은 알파벳과 공백만 주어진다.

//첫 줄에 소문자로 된 정상적인 영단어를 출력한다.
//입력예제:
//bE    au T I fu  L
//출력예제:
//beautiful

#include <iostream>
#include <string>

using namespace std;

int main() {
  string input;
  getline(cin, input); // 공백을 포함한 문자열 입력 받음

  string result;

  // 입력된 문자열에서 공백을 제거하고 소문자로 변환하여 result에 추가
  for (char c : input) {
    if (c != ' ') { // 공백이 아닌 경우에만 추가
      result += tolower(c); // 소문자로 변환하여 추가
    }
  }

  cout << result << endl; // 결과 출력

  return 0;
}