//05. 나이계산
//주민등록 번호가 주어지면 주민등록증 주인의 나이와 성별을 판단하여 출력하는 프로그램

//입력
//780316-2376152

//출력
//나이와 성별을 공백으로 구분해 출력하세요
//42 W
#include <iostream>
#include <string>
using namespace std;

int main() {
  string JDBH;
  cout << "주민등록번호를 입력하세요: ";
  cin >> JDBH;
  int birth_year = stoi(JDBH.substr(0, 2));
  char gender = JDBH[7];

  int age;
  if (gender == '1' || gender == '2') {
    age = 2024 - (1900 + birth_year) + 1;
  } else {
    age = 2024 - (2000 + birth_year) + 1;
  }

  if (gender == '1' || gender == '3' || gender == '9') {
    cout << age << " M" << endl; // 남성
  } else {
    cout << age << " W" << endl; // 여성
  }

  return 0;
}

