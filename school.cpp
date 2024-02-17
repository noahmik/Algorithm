//입력 첫 줄에 숫자가 적힌 문자열이 주어집니다. 문자열의 길이는 50을 넘지 않습니다.
//첫 줄에 자연수를 출력하고, 두 번째 줄에 약수의 개수를 출력합니다.
//입력예제 :
// g0en2Ts8eSoft
//출력예제 :
// 28
// 6
#include <iostream>

using namespace std;

int main() {
  char str[100];
  int n=0, m=0, i=0;
  cin>>str;

  for(i=0; i<strlen(str); i++){
    if(str[i]>=48&&str[i]<=57){
      n = n*10 + str[i]-48;
    }
  }
  for(i=1; i<=n; i++) {
    if (n % i == 0) m++;
  }
  cout<<n<<endl<<m;
}