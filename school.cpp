#include <iostream>
using namespace std;

// 함수, 변수 이름 네이밍 컨벤션
// camel 표기법 - 제일 앞글자 소문자 띄워지는 부분만 대문자
// 클래스 네이밍 컨벤션
// Pascal 표기법 - 제일 앞글자 대문자 띄워지는 부분도 대문자
void showMenu();
void makeAccount();
void withdrawMoney();
void depositMoney();
void showAllAccInfo();

enum {
    MAKE = 1, DEPOSIT = 2, WITHDRAW = 3, INQUIRE = 4, EXIT = 5
};

const int MAX_ACC_NUM = 100;
const int NAME_LEN = 10;

typedef struct {
    // 계좌번호(int)
    int accountID;
    // 잔액(int)
    int bankBalance;
    // 고객이름(char [])
    char cusName[NAME_LEN];
} Account;

Account accArr[MAX_ACC_NUM];
int accNum = 0;

int main() {
  int choice;
  while (true) {
    showMenu();
    cout << "선택 :"; cin >> choice;
    cout << endl;

    switch (choice) {
      case MAKE:
        makeAccount();
        break;
      case DEPOSIT:
        depositMoney();
        break;
      case WITHDRAW:
        withdrawMoney();
        break;
      case INQUIRE:
        showAllAccInfo();
        break;
      case EXIT:
        return 0;
      default:
        cout << "Illegal selection" << endl;
    }
  }
}

void showMenu() {
  cout << "-----menu-------" << endl;
  cout << "1. 계좌개설" << endl;
  cout << "2. 입 금" << endl;
  cout << "3. 출 금" << endl;
  cout << "4. 계좌정보 전체 출력" << endl;
  cout << "5. 프로그램 종료" << endl;
}

void makeAccount() {
  if (accNum < MAX_ACC_NUM) {
    cout << "[계좌개설]" << endl;
    cout << "계좌ID : "; cin >> accArr[accNum].accountID;
    cout << "이  름 : "; cin >> accArr[accNum].cusName;
    cout << "입금액 : "; cin >> accArr[accNum].bankBalance;
    accNum += 1;
  } else {
    cout << "더 이상 계좌를 생성할 수 없습니다." << endl;
  }
}

void withdrawMoney() {
  int accountID, amount;
  cout << "[출 금]" << endl;
  cout << "계좌ID: "; cin >> accountID;
  cout << "출금액: "; cin >> amount;

  // 해당 계좌ID를 찾아서 출금 처리
  for (int i = 0; i < accNum; i++) {
    if (accArr[i].accountID == accountID) {
      if (accArr[i].bankBalance >= amount) {
        accArr[i].bankBalance -= amount;
        cout << "출금 완료" << endl;
      } else {
        cout << "잔액 부족" << endl;
      }
      return;
    }
  }
  cout << "유효하지 않은 계좌ID 입니다." << endl;
}

void depositMoney() {
  int accountID, amount;
  cout << "[입 금]" << endl;
  cout << "계좌ID: "; cin >> accountID;
  cout << "입금액: "; cin >> amount;

  // 해당 계좌ID를 찾아서 입금 처리
  for (int i = 0; i < accNum; i++) {
    if (accArr[i].accountID == accountID) {
      accArr[i].bankBalance += amount;
      cout << "입금 완료" << endl;
      return;
    }
  }
  cout << "유효하지 않은 계좌ID 입니다." << endl;
}

void showAllAccInfo() {
  cout << "-----계좌정보 전체 출력-----" << endl;
  for (int i = 0; i < accNum; i++) {
    cout << "계좌ID: " << accArr[i].accountID << endl;
    cout << "이름: " << accArr[i].cusName << endl;
    cout << "잔액: " << accArr[i].bankBalance << endl << endl;
  }
}