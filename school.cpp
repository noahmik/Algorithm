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
